/*c99中变长数组
允许我们可以使⽤变量指定数组⼤⼩。*/

/*#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];//不能初始化，否则报错，也就是不能={0}...
    // 输入
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // 还可以arr[i]=i,比如输入100，自动生成1~99.
    }
    // 输出
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

/*字符和ASCII编码
char ,这种类型专⻔是⽤来创建字符变量，字符变量是⽤来存储字符的，
所谓字符就是我们在键盘上敲出来的单个符号，如： A,a,1,@,#,$,~ 等等，C语⾔规定，字符必须要放在单引号中。*/

/*打印a
#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("%c\n", ch);
    printf("%c\n", 97);
    printf("%c\n", 'a');

    return 0;
}*/

/*打印32~127的ASCii代表值
#include <stdio.h>

int main()
{
    for (int i = 32; i <= 127; i++)
    {
        printf("%c ", i);
        if (i % 15 == 0) // 打印15个就换行
            printf("\n");
    }

    return 0;
}*/

/*转义字符
 在字符中有⼀组特殊的字符是转义字符，转义字符顾名思义：转变原来的意思。
 ⽐如：我们有字符 n ，在字符串中打印的时候⾃然能打印出这个字符，如下：*/

/*#include <stdio.h>

int main()
{
    printf("abc\ndef");

    return 0;
}*/

/*转义字符还有⼀些，具体如下：
• \? ：在书写连续多个问号时使⽤，防⽌他们被解析成三字⺟词，在新的编译器上没法验证了。
• \' ：⽤于表⽰字符常量'
• \" ：⽤于表⽰⼀个字符串内部的双引号
• \\ ：⽤于表⽰⼀个反斜杠，防⽌它被解释为⼀个转义序列符。
• \a ：警报，这会使得终端发出警报声或出现闪烁，或者两者同时发⽣。
• \b ：退格键，光标回退⼀个字符，但不删除字符。
• \f ：换⻚符，光标移到下⼀⻚。在现代系统上，这已经反映不出来了，⾏为改成类似于 \v 。
• \n ：换⾏符。
• \r ：回⻋符，光标移到同⼀⾏的开头。
• \t ：制表符，光标移到下⼀个⽔平制表位，通常是下⼀个8的倍数。• \v ：垂直分隔符，光标移到下⼀个垂直制表位，通常是下⼀⾏的同⼀列。
两类特殊的转义字符
下⾯2种转义字符可以理解为：字符的8进制或者16进制表⽰形式
• \ddd ：d d d表⽰1~3个⼋进制的数字。 如： \130 表⽰字符X
8进制转义序列拥有三个⼋进制位的⻓度限制，但若提前遇到不是合法⼋进制位的字符，则在⾸个这种
字符处终⽌。
• \xdd ：d d表⽰2个⼗六进制数字。 如： \x30 表⽰字符016进制转义序列⽆⻓度限制，并在⾸个不是合法⼗六进制位的字符处终⽌。
\0 ：null 字符，代表没有内容， \0 就是 \ddd 这类转义字符的⼀种，⽤于字符串的结束标志，其ASCII码值是0*/

/*#include <stdio.h>

int main()
{
    printf("%c\n", '\'');
    printf("%s\n", "\"");
    printf("c:\\test\\code\\test.c\n");
    printf("\a");
    printf("%c\n", '\130'); // 130是8进制，转换成10进制是88，以88作为ASCII码值的字符是 'X'
    printf("%c\n", '\x30'); // x30中的30是16进制，转换成10进制是48，以48作为ASCII码值的字符是 '0'

    return 0;
}*/

/*字符串和字符数组
 C语⾔中有字符类型，但是没有字符串类型，C语⾔中 字符串 就是由双引号引起来的⼀串字符，⽐
如："abcdef";
⼀个字符串中我们直观的能看到⼀些字符，⽐如：字符串常量 "abcdef" 中，我们看到了 a、b、c、
d、e、f 这6个字符，但是实际上在末尾还隐藏⼀个 '\0' 的转义字符， '\0' 是作为字符串的结束标志存在的。
正因为字符串中隐藏⼀个'\0'字符，是字符串的结束标志，所以我们在使⽤库函数打印字符串
（printf）或者计算字符串⻓度(strlen) 的时候，遇到 '\0' 的时候就⾃动停⽌了。
其实字符串和字符数组是⾮常类似的，字符串在内存中存储的时候，也是连续存放的，就像数组⼀样。*/
/*字符数组的创建和初始化字符数组就⼀个存放字符的数组，创建形式如下：*/

/*#include <stdio.h>

int main()
{
    //"abcdef";//常量字符串
    // char 类型的数组中

    char arr1[5] = {'a', 'b', 'c', 'd', 'e'}; // 初始化
 //=char arr1[5] = "abcde"; //字符串常量初始化字符数组有个\0
    //             0   1   2   3   4
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%c", arr1[i]);
    }

    return 0;
}*/

/*\0的重要性*/
/*#include <stdio.h>

int main()
{
    char arr1[] = {'a', 'b', 'c'}; // 可以加个‘\0'后面就没有乱码
    char arr2[] = "abc";

    printf("%s\n", arr1); // 后面有乱码，后面没有\0
    printf("%s\n", arr2);

    return 0;
}*/

/*字符数组的输⼊和输出
我们可以使⽤scanf函数和printf函数完成字符串的输⼊和输出*/
/*#include <stdio.h>

int main()
{
    char arr[10] = {0};
    // 输入操作
    scanf("%s", arr);
    //注：使⽤scanf函数输⼊的时候，我们⾃⼰要保证字符数组⾜够⼤，能够容纳下输⼊进去的字符
    //，要不然就会出问题。这也是scanf被诟病不安全的地⽅。
    // 输出操作
    printf("%s", arr);

    return 0;
}*/

/*求字符串⻓度
在C语⾔中有⼀个库函数叫 strlen ，这个函数是专⻔⽤来求字符串⻓度的。
 strlen 的使⽤需要包含⼀个头⽂件 string.h 。
strlen函数统计的是字符串中 \0 之前的字符的个数，
所以传递给strlen函数的字符串中必须得包含\0 .*/

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "abcdef";
    printf("%zd\n", strlen(str1)); // 6

    char str2[10] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%zd\n", strlen(str2)); // 6

    char str3[] = {'a', 'b', 'c', 'd', 'e', 'f'}; // 可以主动放个'\0'
    printf("%zd\n", strlen(str3));                // 随机值

    // strlen和sizeof的对⽐
    printf("%d\n", strlen(str1));
    printf("%d\n", sizeof(str1));

    return 0;
}*/

/*gets 和 puts 函数*/

/*gets*/
/*#include <stdio.h>

int main()
{
    char arr[20] = {0};
    gets(arr); // 约等于scanf("%s", &arr);
    printf("%s\n", arr);

    return 0;
}*/

/*puts
puts函数打印str指向的字符串到标准输出（⼀般指屏幕），
同时在打印结束后会打印换⾏。*/

/*#include <stdio.h>
int main()
{
    char arr1[] = "abc";
    char arr2[] = "def";
    printf("%s", arr1); // abc
    printf("%s", arr2); // def
    printf("\n");       // 区分两次打印的效果
    puts(arr1);         // abc\n
    puts(arr2);         // def\n

    return 0;
}*/

/*⾃定义函数*/

/*函数的语法形式
其实⾃定义函数和库函数是⼀样的，形式如下：
ret_type fun_name(形式参数)
{

}
1
2
3
4
• ret_type 是函数返回类型
• fun_name 是函数名
• 括号中放的是形式参数
• {} 括起来的是函数体*/

/*#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    // 输⼊
    scanf("%d %d", &a, &b);
    // 调⽤加法函数，完成a和b的相加//求和的结果放在r中
    //to do
//输出
    printf("%d\n", r);
    return 0;
}*/
/*给函数取名：Add，函数Add需要接收2个整型类型的参数，函数计算的结果也是整型。*/
/*形参是实参的一份临时拷贝*/

/*#include <stdio.h>
int Add(int x, int y)//x，y是形参
{
    int z = 0;//可以简化成retrun x+y;
    z = x + y;
    return z;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int r = Add(a, b);//实参
    printf("%d\n", r);

    return 0;
}*/

/*判断闰年*/
/*#include <stdio.h>
int is_leap_year(int y)
{
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int year = 0;
    scanf("%d", &year);
    int ret = is_leap_year(year);//函数调用
    if (ret == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}*/

/*⾃定义函数的设计
 • 函数的参数
• 函数返回值类型
• 函数的功能• 函数的名字*/

/*函数的链式访问
所谓链式访问就是将⼀个函数的返回值作为另外⼀个函数的参数，
像链条⼀样将函数串起来就是函数的链式访问。*/

/*#include <stdio.h>
#include <string.h>

int main()
{
    // size_t len = strlen("abcdef"); // 求字符串的长度a,b,c,d,e,f,\0
    // printf("%zd\n", len);

    printf("%zd\n", strlen("abcdef"));

    return 0;
}*/

/*!!printf特殊应用#include <stdio.h>

int main()
{
    printf("%d", printf("%d", printf("%d", 43)));    // 4321
    printf("%d ", printf("%d ", printf("%d ", 43))); // 43 3 2

    return 0;
}*/

/*函数的镶嵌套用
不能嵌套定义*/
/*!!!!!计算某年某⽉有多少天？
如果要函数实现，可以设计2个函数:
• is_leap_year()：根据年份确定是否是闰年
• get_days_of_month()：调⽤is_leap_year确定是否是闰年后，再根据⽉计算这个⽉的天数*/

#include <stdio.h>

int is_leap_year(int y)
{
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 0;
    else
        return 1;
}

int get_days_of_month(int y, int m)
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //            0   1   2   3   4   5  对齐下标
    int d = days[m];
    if (is_leap_year(y) == 1 && m == 2)
        d += 1;
    return d;
}

int main()
{
    int y, m;
    scanf("%d%d", &y, &m);
    int d = get_days_of_month(y, m);
    printf("%d年%d月有%d天\n", y, m, d);

    return 0;
}