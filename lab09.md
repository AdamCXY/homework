# 自顶向下，逐步求精

```
自顶向下的方法（也被称为分步设计和在用作同义词某些情况下分解）本质上是系统的破坏，以逆向工程的方式深入了解其组成子系统。在自上而下的方法中，系统概述，指定但不详细说明任何第一级子系统。然后，每个子系统都会更详细地进行细化，有时在许多其他子系统级别中进行细化，直到整个规范缩减为基本元素。自上而下的模型通常在“黑匣子”的帮助下指定，这使得操作更容易。但是，黑匣子可能无法澄清基本机制或足够详细以实际验证模型。自上而下的方法始于全局。它从那里分解成更小的部分。
from wikipedia
```

主要步骤：
1. 分析问题

2. 将复杂大问题分解为小问题

3. 找出问题关键

4. 定性定量地去描述问题

核心本质：分解

自顶向下的设计方法使系统被分解为各个模块的集合之后，可以对设计的每个独立模块指派不同的工作小组，这些小组可以工作在不同的地点，甚至可以分属不同的单位，最后将不同的模块集成为最终的系统模型，并对其进行综合测试和评价。


## 以洗衣机算法为例


> 伪代码：

    SET standard_water_volume=n
	SET soak_time=time1
	SET standard_wash_time=time2

	WHILE get_water_volume() <n
		water_in_switch(open)
	ENDWHILE
	water_in_switch(close)		//注水到指定高度

	WHILE time_counter()<time1
		wait
	ENDWHILE				//在指定的时间浸泡衣物
	
	time_counter()=0		//将时间计数清零
	
	WHILE time_counter()<time2
		motor_run(left)
	ENDWHIE				
	
	time_counter()=0	
	
	WHILE time_counter()<time2
		motor_run(right)
	ENDWHILE
	
	time_counter()=0		//按照指定的时间洗涤衣服

	WHILE get_water_volume()>0
		water_out_switch(open)
	ENDWHILE
	water_out_switch(close)			//将洗衣机中的水排出

	WHILE time_counter()<time2
		motor_run(left)
	ENDWHIE				
	
	time_counter()=0	
	
	WHILE time_counter()<time2
		motor_run(right)
	ENDWHILE
	
	time_counter()=0		//按照指定的时间清洗衣服

	WHILE get_water_volume()>0
		water_out_switch(open)
	ENDWHILE
	water_out_switch(close)			//将洗衣机中的水排出

	WHILE time_counter()<time2
		motor_run(left)
	ENDWHIE				
	
	time_counter()=0	
	
	WHILE time_counter()<time2
		motor_run(right)
	ENDWHILE
	
	time_counter()=0			//将衣服脱水甩干

	halt(returncode)		//洗衣完成

