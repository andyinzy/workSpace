#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[10];
    char num[10];
}STU;

int main()
{
    STU stu, good, bad;
    int n=0, score=0;
    scanf("%d",&n);
    int max_score = -1, min_score = 100;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", stu.name, stu.num, &score);
        if (score > max_score) {
            memset(good.name, 0, sizeof(good.name));
            memset(good.num, 0, sizeof(good.num));
            for (int i = 0; i < 10; i++){
                if (stu.name[i]) good.name[i] = stu.name[i];
                if (stu.num[i]) good.num[i] = stu.num[i];
            }
            max_score = score;
        }
        if (score < min_score) {
            memset(bad.name, 0, sizeof(bad.name));
            memset(bad.num, 0, sizeof(bad.num));
            for (int i = 0; i < 10; i++){
                if (stu.name[i]) bad.name[i] = stu.name[i];
                if (stu.num[i]) bad.num[i] = stu.num[i];
            }
            min_score = score;
        }
        memset(stu.name, 0, sizeof(stu.name));
        memset(stu.num, 0, sizeof(stu.num));
    }
    char *good_name = good.name, *good_num = good.num;
    char *bad_name = bad.name, *bad_num = bad.num;
    printf("%s %s\n%s %s", good_name, good_num, bad_name, bad_num);
}



/**输出：
 * mike 0123456789�
   joe 1234567890�
 * 感觉问题出在 终止符\0上，
 *
 * 还有个问题是，地址传地址，比如：*p1,*p2,*p3; p1=p2, p3 = p2,
 * 当p2一变，p1、p3都会变，与是否进入条件语句无关，
 * 所以if(statement_1) p1 = p2;
 * else if (statement_2) p3 = p2;
 * p2一变，p1、p3都会变
 * 不要用传地址的方式，但是也不能：
 *
 * *p1 = "12321321";
 * *p2 = *p1; 这个解引用是错误的
 *
 *
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



// int main()
// {
//     char a[20] = "memememmemememe";
//     char *p = a;
//     char *q;
//     *q = *p;
//     printf("%s",p);
// }