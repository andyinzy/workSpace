- 链表是一种存储结构——线性表的链式存储。由结构体和指针构成。
- 一个节点包含本身的信息——数据域和指向直接后继的指针——指针域。
- 可以动态的进行存储分配，类似于一个功能极为强大的数组
- 链表有两种节点：头结点和一般节点，一般以head来表示，存放的是一个地址，头结点没有数据域。

若头结点的指针域为空（NULL），表明链表是空表。

基本操作有：**初始化、增加节点、删除节点、求链表长度**

### 分配内存空间

C 中 malloc， C++中 new 都可以给链表分配内存

**malloc 在 stdlib.h 头文件中，返回类型是申请的同变量类型的指针**
```
    typename* p = (typename*)malloc(sizeof(typename));    //强制转换为node*型的指针
    int* p = (int*)malloc(sizeof(int));
    double* node = (double*)malloc(sizeof(double));
```
**申请失败返回空指针NULL**，失败一般发生在申请了过大的动态数组如 ：`malloc(100000*sizeof(int))`

**new 返回类型也是申请的同变量类型的指针**
```
    typename* p = new typename;
    int* p = new int;
    node* k = new node;
```
**用完后必须释放内存，否则会内存泄漏。**
```
    free(指针变量);
    delete(指针变量);
```
**free() 在 stdlib.h 头文件下，做了两件事，释放指针变量的内存空间，把指针变量指向空地址NULL。**

**使用链表通常要包含头文件 stdio.h 和 stdlib.h。**

# 单链表

```
```


### 创建
```
    typedef struct Link {
    		typename data;    //数据域
    		struct Link *next;    //指针域
    } Linklist;
```
为什么用 typedef struct：定义结构体变量时，我们就可以直接可以用 `LinkList *a;`定义结构体类型变量了。

### 初始化

n 为链表节点个数
```
    Linklist* creat(int n)
    {
    		Linklist *head, *node, *end;
    		head = (Linklist*)malloc(sizeof(Linklist));
    		end = head;
    		for (int i = 0; i < n; i++) {
    				node = (Linklist*)malloc(sizeof(Linklist));
    				scanf("%d", &node->score);
    				end->next = node;
    				end = node;
    		}
    		end->next = NULL;
    		return head;
    }
```
### 删除

### 修改节点值

# 双链表

# 常见面试题
- 单链表的冒泡排序

- O(1)时间内删除链表节点

用下一个节点数据覆盖要删除的节点，然后删除下一个节点。

- 输入一个链表，输出该链表中倒数第k个结点。

- 输入一个链表，输出该链表中间的结点。

- 判断一个链表是否是回文链表。

- 从有序链表中删除重复节点。

- 删除链表的倒数第 n 个节点。

- 交换链表中的相邻结点。

- 链表元素按奇偶聚集。

- 链表求和。

- 分割链表。


### 参考博客/文章

链表面试题总结（一）https://blog.csdn.net/qq_26768741/article/details/51635987



$ \sum_{i=0}^{n}i^2 $










































