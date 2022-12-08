#include <stdio.h>

#define BOOM 36 // 懂的都懂
// 牌区，空白处全为0
int PaiQ[20] = {4,3,6,11,7};
// “方”区
int Fang[20] = {1};
// 用于记录应当排除的“方”的下标，空白处赋为-1
int record[20];
int Fsum = 0; // “方”区点数和
int Flen = 0; // “方”区牌数
// 次要函数
/*将传入的数组初始化为value*/
void init(int *Array, int value)
{
    for (int i = 0; i < 20; i++)
        Array[i] = value;
}

/*将数组Array视作队列压入新元素*/
void push(int *Array, int value, int newp)
{
    // 令新元素newp替换第一个空白处（值为value）
    for (int i = 0; i < 20; i++)
    {
        if (Array[i] == value)
        {
            Array[i] = newp;
            break;
        }
    }
}

/*将数组Array视作队列弹出旧元素*/
void pop(int *Array, int oldp)
{
    for (int i = 0; i < 20; i++)
    {
        // 找到与oldp同值的元素后，标记下标i
        // 将后面所有元素依次往前推一位，直到遇到空白处
        if (Array[i] == oldp)
        {
            for (; i < 20; i++)
            {
                if (Array[i] == 0)
                    break;
                Array[i] = Array[i + 1];
            }
            break;
        }
    }
}
// 主要函数，各语句含义见注释
/*递归求解炸人方案，由总和倒推到单个元素（实际上推不到，最少必须有2张“方”才能炸人），
本质上是组合数的思想，fsum是子全“方”和，tag是即将减去的元素的下标，calC是计算组合数的意思*/
int calC(int fsum, int PaiQ_i, int tag)
{
    fsum = fsum - Fang[tag];
    // 这里与canBoom里判断的思想是一样的
    if (fsum + PaiQ_i < BOOM)
        return 0;
    else if (fsum + PaiQ_i == BOOM)
    {
        init(record, -1); // 算出了炸人方案，表示要记录元素了，先初始化一下record
        printf("可以炸人！方案为：");
        return 1;
    }
    else if (fsum + PaiQ_i > BOOM)
    {
        while (++tag < Flen)
        { //++tag表示tag+1后的值，这里图省字了
            if (calC(fsum, PaiQ_i, tag) == 1)
            {
                // 因为我是递归地减去元素的，而要输出的是剩下的元素，
                // 所以需要先记录每一步删去的是什么元素，再统一输出剩余的元素
                push(record, -1, tag);
                return 1;
            }
        }
    }
}

/*输出解决方案*/
void printScheme(int PaiQ_i)
{
    // 此时record里记录的是应当删去的元素下标
    // 这里采取的方法是遍历record，将Fang(先用tmp复制)里对应下标的元素赋值为-1
    // 然后遍历tmp，输出剩余元素
    int tmp[20] = {0};
    memcpy(tmp, Fang, 20);
    for (int i = 0; i < 20; i++)
    {
        if (record[i] == -1)
            break;
        tmp[record[i]] = -1;
    }
    for (int i = 0; i < 20; i++)
    {
        if (tmp[i] == -1)
            continue;
        if (tmp[i] == 0)
            break;
        printf("%d ", tmp[i]);
    }
    printf("+ 点数为%d的牌。\n", PaiQ_i);
}

/*判断是否可以炸人*/
void canBoom()
{
    init(record, -1); // 初始化记录表
    // 计算“方”区的点数和
    for (int i = 0; i < 20; i++)
    {
        if (Fang[i] == 0)
            break;
        Fsum += Fang[i];
        Flen++;
    }
    // 遍历牌区，抽出每一张牌，判断是否能炸人
    for (int i = 0; i < 20; i++)
    {
        if (PaiQ[i] == 0)
            break; // 遇到牌区空白处，停止遍历
        // 以下对应三种情况：
        // 1.全部“方”和该牌点数的和都不够36，就不必算“方”的组合情况了
        // 2.全部“方”和该牌点数的和正好为36，直接输出，不必再算
        // 3.全部“方”和该牌点数的和超过36，需算“方”的组合情况，循环使用递归函数
        if (Fsum + PaiQ[i] < BOOM)
        {
            printf("所有“方”与点数为%d的牌的和不满36，无炸人解;_;\n", PaiQ[i]);
        }
        else if (Fsum + PaiQ[i] == BOOM)
        {
            printf("所有“方”与点数为%d的牌的和正好为36，刚好炸^0^\n", PaiQ[i]);
        }
        else if (Fsum + PaiQ[i] > BOOM)
        {
            int tag = 0; // 下标
            int ret = 0; // 结果标记
            while (tag < Flen)
            { // 从tag=0开始，传入sumC的是原tag，算完后tag+1
                if (calC(Fsum, PaiQ[i], tag++) == 1)
                {
                    ret = 1; // 表示可以炸人，不输入失败语句
                    push(record, -1, tag - 1);
                    printScheme(PaiQ[i]);
                    init(record, -1);
                    continue; // 算出炸人方案就不必再往下递归了，之后向同级或往上递归
                }
            }
            if (!ret)
                printf("很遗憾，点数为%d的牌没有炸人方案:(\n", PaiQ[i]);
        }
    }
}

// 二、主程序
int main()
{
    int newcard = 0;
    printf("分析炸人方案中...\n");
    canBoom();
    printf("计算结束！\n");
    return 0;
}