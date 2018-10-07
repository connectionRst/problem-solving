# NOIP模拟赛

[TOC]

## 时间 ：1s  空间 512M

## 都开启O2优化



## 买球

#### 题意

 一个人如果在他很小的时候就自己赚过钱,他的一生都会过得非常节俭,因为他知道财富来之不易.

作为一个勤俭节约的好孩子，LMOliver决定在生活中践行这一原则.

有一天他想去商店买一些球来玩，他发现商店里有$n$个盒子，每个盒子外面有一张标签告诉你有$a_i$个红球，$b_i$个蓝球，需要$c_i$的钱购买

但是由于店主是一个粗心的人,他告诉你每个盒子球的总量是符合标签的说明的,但是具体的种类可能会有如下偏差,比如可能有

$(a_i+1 ,b_i-1),(a_i, b_i),  (a_i-1, b_i+1)$三种可能

LMOliver 想要买至少K个同颜色的球,但是他又不想浪费钱.

帮他算算最少花多少钱买盒子能够使得至少会有K个球是同色的


#### 输入格式

第一行输入两个整数$n,K$ ($1\le n\le50$, $1 \le K \le 10000$)

第二行输入$n$个整数表示$a$数组

第三行输入$n$个整数表示$b$数组

第三行输入$n$个整数表示$c$ 数组

$1 \le a_i,b_i,c_i \le 10000$



#### 输出格式

输出一个整数，如果无法达成目的，输出$-1$



#### 样例输入１

```
2 10
6 5
4 4
1 1
```



#### 样例输出１

```
2
```



#### 样例输入2

```
2 10
5 5
4 4 
1 1
```



#### 样例输出２

```
-1
```



#### 样例输入3

```
1 9
10
5
13
```



#### 样例输出3

```
13
```



#### 样例输入4

```
5 10
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```



#### 样例输出4

```
10
```



#### 样例输入5

```
5 17
1 2 3 4 15
1 2 3 4 5
1 2 3 4 5
```



#### 样例输出5

```
9
```



#### 数据范围



| 子任务点 | $n$        | 分值 |
| :------- | ---------- | ---- |
| $1$      | $n \le 10$ | 30   |
| $2$      | $n \le50$  | 70   |
|          |            |      |



## 最小的最大

#### 题意

yys: ''yyq快来看这个题是最小的最大''

yyq: ''此题一定是二分无疑了'':cowboy_hat_face:

yyk: "二分能过此题我请你吃XJ食堂吧"

yys: "见者有份" :smile:

给你一个无向连通图，点的标号为$0$到$n-1$没有自环与重边，有点权与边权

定义一条路径的难度值为路径上最大的点权乘上边权

对于一对点$(a,b)$,令$d(a,b)$ 为$a$到$b$的路径中难度值最小的路径,求所有的$d(a,b)$之和($0 \le a < b \le n-1$)





#### 输入格式

第一行输入两个整数$n,m$ ($2 \le n \le 300, n - 1 \le m \le min(2500, n*(n-1)/2)$)

第二行输入$m$个整数$a_i$

第三行输入$m$个整数$b_i$

第四行输入$m$ 个整数$w_i$($1\le w_i \le 10^6$)

第五行输入$n$个整数$v_i$($1\le v_i \le 10^6$)

$a_i,b_i$之间有一条无向边，权值为$w_i$

每个点的点权是$v_i$





#### 输出格式

输出一个整数



#### 样例输入1

```
2 1
0
1
5
3 6
```



#### 样例输出1

```
30
```



#### 样例输入2

```
3 3
0 0 1
1 2 2
10 11 12
6 5 4
```



#### 样例输出2

```
186
```



#### 样例输入3

```
3 3
0 0 1
1 2 2
100 1 1
1 1 100
```



#### 样例输出3

```
300
```



#### 样例输入4

```
11 10
0 1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
1000000 1 1000000 1 1000000 1 1000000 1 1000000 1
1000000 1 1000000 1 1000000 1 1000000 1 1000000 1 1000000
```



#### 样例输出4

```
50000005000000
```





#### 数据范围



| 子任务点 | $n$       | 分值 |
| -------- | --------- | ---- |
| $1$      | $\le 50$  | $20$ |
| 2        | $\le 100$ | $20$ |
| 3        | $\le 300$ | $60$ |
|          |           |      |



## 初等数论

#### 题意

众所周知，小帅是数论小王子，他为了提升大家的数论能力，特意出了一道题给大家

给你一个整数$N$

你需要构造出$N$个整数满足如下条件

- 每一个数都在$[1,10^{18}]$之间
- 相邻两个数互质
- 除了相邻的数，再也没有任何两个数互质

小帅自信的向大家保证肯定有解:smile:



#### 输入格式

输入一个整数$N$ ($2 \le N \le 500$)





#### 输出格式

输出一行包含$N$个整数



#### 样例输入1

```
2
```



#### 样例输出1

```
14 25
```



#### 样例输入2

```
3
```



#### 样例输出2

```
1000000000000000000 1 1000000000000000000
```



#### 样例输入3

```
6
```



#### 样例输出3

```
14 39 80 63 26 105
```



#### 数据范围

| 子任务点 | $n$       | 分值 |
| -------- | --------- | ---- |
| 1        | $\le 10$  | 10   |
| 2        | $\le 20$  | 20   |
| 3        | $\le 50$  | 30   |
| 4        | $\le 500$ | 40   |
|          |           |      |