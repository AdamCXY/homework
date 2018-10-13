# ***HTML小游戏的event设计***

```java
  关于HTML小游戏的制作网上已有大量的教程，此处便不再重复再说，这篇博客主要讲一讲HTLM游戏制作中的一个event的编写与设计
```

 <font color=NavajoWhite>   条件，行动和子事件</font>


 > 事件由条件组成，测试是否满足某些条件，例如“空格键是否已关闭？”。如果满足所有这些条件，则事件的所有操作都会运行，例如“创建项目符号对象”。运行后，任何子事件也会运行 - 然后可以测试更多条件，然后运行更多操作，然后运行更多子事件，等等。使用此系统，我们可以为我们的游戏和应用程序构建复杂的功能。但是，我们不需要本教程中的子事件。

> 简而言之，条件，行动和子事件的执行情况就类似于c语言中的循环语句，在满足条件之后执行行动，然后是子事件。

<font color=NavajoWhite>第一个event：使角色指向鼠标</font>

首先，我们进入编辑事件页( •̀ ω •́ )y
<a href="https://imgbb.com/"><img src="https://image.ibb.co/dkGweU/7.png" alt="7" border="0"></a>

进入event sheet1，鼠标双击空白处，选择syste。
<a href="https://imgbb.com/"><img src="https://image.ibb.co/gaTytp/2.png" alt="2" border="0"></a>

双击 System对象，如图所示。然后，该对话框将列出所有System对象的条件：
<a href="https://imgbb.com/"><img src="https://image.ibb.co/kaR7m9/3.png" alt="3" border="0"></a>

双击的每个标记的条件，将其插入。对话框将关闭并创建事件，不执行任何操作。它现在应该是这样的：

  <a href="https://imgbb.com/"><img src="https://image.ibb.co/fEsf69/4.png" alt="4" border="0"></a>

  接下来，我们Add action，请注意看清楚，是位于右边的Add action，而非下面的Add event，这是有很大的区别的。Add action是在这个event下添加行动，而Add event则是添加新的event了，与这个event就不相关了。

你将看到以下画面：


<a href="https://imgbb.com/"><img src="https://image.ibb.co/fFibeU/5.png" alt="5" border="0"></a>

与添加事件一样，我们有相同的对象列表可供选择，但这次是添加操作。尽量不要在添加条件和添加操作之间感到困惑！如图所示，双击该播放器的对象，因为这是我们要看看鼠标的玩家。将显示Player对象中可用的操作列表：

<a href="https://imgbb.com/"><img src="https://image.ibb.co/bt89zU/6.png" alt="6" border="0" /></a>

注意玩家的8方向移动行为如何有自己的动作。不过，我们暂时不需要担心。
不是将玩家的角度设置为多个度数，而是使用设置角度朝向位置动作很方便。这将自动计算从玩家到给定的X和Y坐标的角度，然后将对象的角度设置为该角度。双击 “ 设置角度朝向位置”操作。

最终的结果将是：

<a href="https://imgbb.com/"><img src="https://image.ibb.co/crwjYp/1.png" alt="1" border="0"></a><br /><a target='_blank' href='https://poetandpoem.com/analysis-of-a-psalm-of-life-by-henry-wadsworth-longfellow'>a psalm of life critical appreciation</a><br />

尝试运行游戏，玩家现在可以像以前一样移动，但总是面向鼠标。这就是一个基本的event设计了。

```java
  通过以上的操作，我们可以学习到关于设计event的一点小小的技巧，以此类推，通过这些基本操作，我们便可以掌握如何设计其它的event了。不过这也需要加强自己的英语水平以便去理解每个actio的意义。
```

<a href="https://ibb.co/n2RbUU"><img src="https://preview.ibb.co/ctrX3p/1.gif" alt="1" border="0" /></a>