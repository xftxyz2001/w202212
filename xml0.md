---
marp: true
---

# XML

---
## 简介
<!-- 来自百度百科的说法 -->
可扩展标记语言 (Extensible Markup Language, XML) ，标准通用标记语言的子集，可以用来标记数据、定义数据类型，是一种允许用户对自己的标记语言进行定义的源语言。XML是标准通用标记语言可扩展性良好，内容与形式分离，遵循严格的语法要求，保值性良好等优点。
在电子计算机中，标记指计算机所能理解的信息符号，通过此种标记，计算机之间可以处理包含各种的信息比如文章等。它可以用来标记数据、定义数据类型，是一种允许用户对自己的标记语言进行定义的源语言。它非常适合万维网传输，提供统一的方法来描述和交换独立于应用程序或供应商的结构化数据。是Internet环境中跨平台的、依赖于内容的技术，也是当今处理分布式结构信息的有效工具。早在1998年，W3C就发布了XML1.0规范，使用它来简化Internet的文档信息传输。


---
## 发展历史
XML有两个先驱：SGML和HTML，这两个语言都是非常成功的标记语言，但是都有一些与生俱来的缺陷。XML正是为了解决它们的不足而诞生的。

---
### SGML
早在Web未发明之前，SGML(Standard Generalized Markup Language，标准通用标记语言)就已存在，正如它的名称所言，SGML是国际上定义电子文件结构和内容描述的标准。SGML具有非常复杂的文档结构，主要用于大量高度结构化数据的访问和其他各种工业领域，在分类和索引数据中非常有用。 
虽然SGML的功能很强大，但是它不适用于Web数据描述，而且SGML软件的价格非常昂贵；另外，SGML十分庞大，既不容易学，又不容易使用，在计算机上实现也十分困难：不仅如此，几个主要的浏览器厂商都明确拒绝支持SGML，这无疑是SGML在网上传播遇到的最大障碍。鉴于这些因素，Web的发明者——欧洲核子物理研究中心的研究人员，根据当时（1989年）的计算机技术，发明并推出了HTML。

---
### HTML
1989年，HTML诞生，它抛弃了SGML复杂庞大的缺点，继承了SGML的很多优点。HTML最大的特点是简单性和跨平台性。
HTML是一种界面技术，它只使用了SGML中很少的一部分标记，例如HTML 4.0中只定义了70余种标记。为了便于在计算机上实现，HTML规定的标记是固定的，即HTML语法是不可扩展的。HTML这种固定的语法使它易学易用，在计算机上开发HTML的浏览器也十分容易。正是由于HTML的简单性，使得基于HTML的Web应用得到了极大的发展。

---
### XML的产生
随着Web应用的不断发展，HTML的局限性也越来越明显地显现了出来，如HTML无法描述数据、可读性差、搜索时间长等。人们又把目光转向SGML，再次改造SGML使之适应现在的网络需求。随着先辈的努力，1998年2月10日，W3C(World Wide Web Consortium，万维网联盟)公布XML 1.0标准，XML诞生了。
XML最初的设计目的是为了EDI(Electronic Data Interchange，电子数据交换)，确切地说是为EDI提供一个标准数据格式。
当前的一些网站内容建设者们已经开始开发各种各样的XML扩展，比如数学标记语言MathML、化学标记语言CML等。此外，一些著名的IT公司，如Oracle、IBM以及微软等都积极地投入人力与财力研发XML相关软件与服务支持，这无疑确定了XML在IT产业的重要地位。


---
## 那么什么是XML呢？
<!-- 说了这么多那么什么是XML呢？ -->
- XML 指可扩展标记语言（EXtensible Markup Language），你可以随心所欲的使用任何XML标签。
- XML 是一种很像HTML的标记语言。（稍后会介绍他们的差别）
- XML 的设计宗旨是传输数据，而不是显示数据。它将一块数据定义一个识别标记标签（例如：用`<name>张三</name>`，来表示名字是张三）。
- XML 标签没有被预定义，需要用户自行定义标签。
- XML 被设计为具有自我描述性。（即可以直接通过XML内容，了解其要传达的信息）
- XML 是 W3C 的推荐标准。

---
<!-- W3C的介绍，来自W3school，随便看看就好。 -->
> 什么是 W3C？
> - W3C 指万维网联盟（World Wide Web Consortium）
> - W3C 创建于1994年10月
> - W3C 由 Tim Berners-Lee 创建
> - W3C 是一个会员组织
> - W3C 的工作是对 web 进行标准化
> - W3C 创建并维护 WWW 标准
> - W3C 标准被称为 W3C 推荐（W3C 规范）

---
> W3C 是如何创建的？
> 万维网（World Wide Web）是作为欧洲核子研究组织的一个项目发展起来的，在那里 Tim Berners-Lee 开发出万维网的雏形。
> Tim Berners-Lee - 万维网的发明人 - 目前是万维网联盟的主任。
> W3C 在 1994 年被创建的目的是，为了完成麻省理工学院（MIT）与欧洲粒子物理研究所（CERN）之间的协同工作，并得到了美国国防部高级研究计划局（DARPA）和欧洲委员会（European Commission）的支持。


---
## XML的特点
<!-- 来自于百度百科，已删减。 -->
1. XML可以从HTML中分离数据。
2. XML可用于交换数据。
3. XML可应用于B2B中。
4. 利用XML可以共享数据。
5. XML可以充分利用数据。
6. XML可以用于创建新的语言。

总之，XML使用一个简单而又灵活的标准格式，为基于Web的应用提供了一个描述数据和交换数据的有效手段。但是，XML并非是用来取代HTML的。HTML着重如何描述将文件显示在浏览器中，而XML与SGML相近，它着重描述如何将数据以结构化方式表示。


---
## XML与HTML的区别
<!-- 某位CSDN博主总结的 -->
- HTML有大量的预定义标签属性，XML则没有。XML由标签用户完全定制。
- 某种意义上来说HTML是XML的子集，一个HTML文档实际上也是一种特殊XML文档（尽管如此XML语法相对于HTML而言严苛许多，因为HTML容错机制，允许用户省略部分结束标签或一些其他机制，而这在XML中是绝对不允许的）
- HTML是为了显示数据而设计的，它关注的是如何呈现数据，XML则是为了传输和存储数据，它关注的是数据的内容。

>（后面还会多次提到）


---
## XML 用途
XML 应用于 Web 开发的许多方面，常用于简化数据的存储和共享。
- 把数据从 HTML 分离
- 简化数据共享
- 简化数据传输
- 简化平台变更
- 使您的数据更有用
- 用于创建新的互联网语言


---
## XML的学习过程
<!-- 我们应该用不了说这么多 -->
1. XML 可扩展标记语言（EXtensible Markup Language）
2. DTD 文档类型定义（Document Type Definition）
3. XML Schema XML 模式（也叫 XML Schema Definition，XSD ， 是DTD的替代者）
4. XHTML 可扩展超文本标签语言（EXtensible HyperText Markup Language）
5. XPath XML 路径
6. XSL 扩展样式表语言（EXtensible Stylesheet Language，以及XSLT）

**扩展**
1. XQuery 被设计用来查询 XML 数据
2. XLink 和 XPointer

**进阶**
1. XPath-React 在React中使用XPath
2. Headless Browser 无头浏览器（无头是无界面的意思）


---
## 语法速览
<!-- 说了这么多，终于要介绍实质性的东西了。 -->
### 所有元素都必须有关闭标签。（正确闭合）
在 HTML 中，某些元素不必有一个关闭标签：
`<br>`、`<hr>`

在 XML 中，省略关闭标签是非法的。所有元素都必须有关闭标签：
`<p>这是一个标签对</p>`
但标签应当像这样闭合：`<br />`

### XML是大小写敏感的
 `<book></book>`和`<Book></Book>`是两种不同标签，尽管他们看起来表述的意义一致。同时开始标签与结束标签的大小写必须一致。（这一点与HTML不同）

---
### 标签必须正确的嵌套（用过HTML的应该很容易理解）。
`<b> <i></i> </b>`

像这下面的标签使用是非法的：
`<b> <i></b> </i>`

### 文档必须有一个根元素是其他元素的父元素。
```xml
<root>
  <child>
    <subchild>.....</subchild>
  </child>
</root>
```

如果其其包含XML的声明，声明应该位于文档的第一行：
`<?xml version="1.0" encoding="utf-8"?>`

---
### 属性值必须加英文半角双引号(")。
```xml
<mail date="11/11/2022">
  <from>A</from>
  <to>B</to>
</mail>
```

---
### 转义字符（实体引用）
在 XML 中，一些字符拥有特殊的意义。
如果您把字符 "`<`" 放在 XML 元素中，会发生错误，这是因为解析器会把它当作新元素的开始。

---
在 XML 中，有 5 个预定义的实体引用：
| 实体引用 | 实体 | 全程           | 中文名 |
| -------- | ---- | -------------- | ------ |
| `&lt;`   | <    | less than      | 小于   |
| `&gt;`   | >    | greater than   | 大于   |
| `&amp;`  | &    | ampersand      | 与     |
| `&apos;` | '    | apostrophe     | 单引号 |
| `&quot;` | "    | quotation mark | 双引号 |


---
## XML 元素
XML 文档包含 XML 元素。

---
### 什么是 XML 元素？
XML 元素指的是从（且包括）开始标签直到（且包括）结束标签的部分。
元素可包含其他元素、文本或者两者的混合物。元素也可以拥有属性。


## XML 属性





## XML 验证





## XML 验证器





## XML 浏览器





## XML 查看





## XML CSS





## XML XSLT






---
## 参考资料
- [百度百科-XML](https://baike.baidu.com/item/%E5%8F%AF%E6%89%A9%E5%B1%95%E6%A0%87%E8%AE%B0%E8%AF%AD%E8%A8%80)
- [mozilla-XML (可扩展标记语言)](https://developer.mozilla.org/zh-CN/docs/Web/XML)
- [W3school-XML 教程](https://www.w3school.com.cn/xml/index.asp)
- [菜鸟教程-XML 教程](https://www.runoob.com/xml/xml-tutorial.html)
- [菜鸟教程-W3C 简介](https://www.runoob.com/w3c/w3c-intro.html)
- [CSDN-起源之路——理解和看懂XML](https://blog.csdn.net/LuoGuoHua_Xin/article/details/103549762)
- [GitHub-XML_Study_Notes](https://github.com/sheenden0722/XML_Study_Notes)
