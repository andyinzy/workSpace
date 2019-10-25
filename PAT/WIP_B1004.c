#include <stdio.h>

typedef struct Student
{
    char name[10];
    char num[10];
}STU;

int main()
{   
    STU stu, good, bad;
    int n,score;
    scanf("%d",&n);
    char* stu_name = stu.name, *stu_num = stu.num;
    char* good_name = good.name, *good_num = good.num;
    char* bad_name = bad.name, *bad_num = bad.num;

    int max_score = -1, min_score = 100;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", stu_name, stu_num, &score);
        if (score > max_score) {
            good_name = stu_name;
            good_num = stu_num;
            max_score = score;
        } 
        if (score < min_score) {
            bad_name = stu_name;
            bad_num = stu_num;
            min_score = score;
        }
    }
    printf("\n%s %s\n%s %s", good_name, good_num, bad_name, bad_num);
}



/**
 * 注意，在scanf往字符串指针里输入字符串的时候，必须先定义字符数组，
 * 再将指针变量地址指定过去
 * 比如：
        char *p;
        scanf("%s", p);
        printf("%s", p);
        return 0;
 * 是错误的， p的地址未知，所以不可能有输出
 * 
 * 纠正如下：
        char a[10];
        char* p = a;
        scanf("%s", p);
        printf("%s", p);
        return 0;
 * 
 * char p 首先它是一个常量，如果是char p[10] = {};那么它就是一个变量。
 * 常量的值只可以读取不可以写入，变量的值可读可写。
 * 在用printf语句打印%s的时候,printf语句要求提供字符串首地址。
 * 这是printf所规定的，也就是看到%s，printf就要求指针变量，而不是我们逻辑上认为的指针里面所存储的内容。
 * 所以用printf("%s",p);而不是printf("%s",p); 这一点必须记住。
 * 如果用%c，想输出里面的内容就可以按照正常的指针概念，用*p了。
 * 可以执行一下这一条语句char * p = "string pointer dam fucking sucks!"; printf("%s\n%p\n%c\n", p, p, *p);
 * 你会发现c实际上没有string类型。那么c的%s怎么来的呢？用char数组代替。
 * 那么%s如何工作？它会从所给指针指向的位置开始，逐字符的打印输出，直到遇到“/n”或者“/0”。
 * 所以%s需要的只是一个指针值。(或者说数组第一个值的内存地址)读取了第一个值后，它会跳到后面的位置继续读取，这建立在你传给它的值是指针的前提上。
 * 如果你用了，结果只得到了第一个字符而没有指针(表示取出指针所指位置保存的值)，程序不知道后续字符的储存位置，它去哪里找？再说%d，%d只打印一个十进制数值，不需要后续继续打印
*/