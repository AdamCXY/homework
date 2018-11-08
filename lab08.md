# 吃豆人大战小鬼人

>  * 楔子：可爱的吃豆人又回来了！这次小吃豆人为了飞上高空去吃豆豆，不得而逆天而行，这是，淘气的小鬼人又出来捣乱了，为了吃到心爱的豆豆，这次吃豆人决定吐出子弹来反击小鬼人。
>  * 玩法：上下左右键控制吃豆人的移动，单机空格键可以射出子弹。得到一百分为任务成功，吃豆人被小鬼人吃掉为任务失败。
>  * 人设与道具：

1. 吃豆人，吃豆人由于吃了很多豆豆，体格变得更加强壮，所以不会碰到鬼人就死亡。吃豆人有两条命，在第二次碰到鬼人才会死亡。
<img src="https://i.loli.net/2018/11/08/5be391b0eaee8.png" alt="player.png" title="player.png" />
2. 小鬼人：小鬼人随机地从天而降，小鬼人拥有三条命。

<img src="https://i.loli.net/2018/11/08/5be39188e3a39.png" alt="小鬼人.png" title="小鬼人.png" />

3. 子弹：吃豆人发出的子弹，每粒子弹能使小鬼人的生命值减少一点。
<img src="https://i.loli.net/2018/11/08/5be391a7cb62a.png" alt="子弹.png" title="子弹.png" />


> * object:吃豆人
> * Attribute:图片，位置
> * Collaborator:精灵
> * Events&Action:

1. On collision with monster &rarr; Subtract 1 from hp

2. hp<=2 &rarr; Set animation to "boom"&rarr; Wait 1.0 seconds&rarr;destroy

> * Object:小鬼人
> * Attribute:图片，位置
> * Collaborator:精灵
> * Events&Action:

health<=0 &rarr; Set animation to "boom"&rarr;Wait 0.1 seconds &rarr; Destroy &rarr; Add 1 to Score

> * Object:子弹
> * Attribute:图片，位置
> * Collaborator:精灵
> * Events&Action:

On collision with monster &rarr; 小鬼人 Subtract 1 from health &rarr; (子弹)Destroy

> * Object:记分板
> * Attibute:图片，位置
> * Collaborator:Text
> * Events&Action:

Set text to "得分" &Score

<img src="https://i.loli.net/2018/11/08/5be3961897248.png" alt="捕获.PNG" title="捕获.PNG" />


<img src="https://i.loli.net/2018/11/07/5be2f07b3e688.gif" alt="dafeiji.gif" title="dafeiji.gif" />



































