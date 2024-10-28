/*Description
    编写一个能够输出 Hello,
    World !的程序。

        提示：

            使用英文标点符号；
                Hello,
    World !逗号后面没有空格。
        H 和 W 为大写字母。*/
/*#include <stdio.h>

int main()
{
    printf("Hello,World!\n");

    return 0;
}*/

/*输入两个整数a,b,输出它们的和*/

/*#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d", c);

    return 0;
}*/

/*计算分数的浮点数
保留9位小数*/

/*#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.9f", a / b);

    return 0;
}*/

/*给定被除数和除数，求整数商和余数*/

/*#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", a / b, a % b);

    return 0;
}*/

/*计算球的体积*/

/*#include <stdio.h>

int main()
{
    double r, v;
    scanf("%lf", &r);
    v = 1.0 * 4 / 3 * 3.14 * r * r * r;
    printf("%.5f\n", v);

    return 0;
}*/

/*三位数排序*/

/*#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c)
        printf("%d% d %d", a, b, c);
    else if (a < b && c < b && a < c)
        printf("%d %d %d", a, c, b);
    else if (b < a && a < c)
        printf("%d %d %d", b, a, c);
    else if (b < a && c < a && b < c)
        printf("%d %d %d", b, c, a);
    else if (c < a && a < b)
        printf("%d %d %d", c, a, b);
    else if (c < a && b < a && b < a)
        printf("%d %d %d", c, b, a);
    else
        printf("%d %d %d", a, b, c);

    return 0;
}*/

/*苹果和虫子
吃了几个，余下个数，吃的个数不是整数，余下的个数是负数*/

/*#include <stdio.h>

int main()
{
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    if (t != 0)//吃的速度不等于0
    {
        int sum = 0;//吃了几个
        int retval = 0;//余下个数
        sum = s / t;
        if (s % t != 0)//吃的个数不是整数
        {
            sum++;
        }

        retval = m - sum;

        if (retval < 0)//余下的个数是负数
        {
            printf("0\n");
        }
        else
        {
            printf("0\n", retval);
        }
    }
    else//吃的速度等于0
    {
        printf("0\n");
    }

    return 0;
}*/

/*闰年的判断
1.是4的倍数，不是100的倍数
2.400的倍数*/

/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}*/

/*!!!!
找最小值
 第一行输入一个正整数，表示数字个数
 第二行输入n个非负整数，表示a1，a2...an,以空格隔开*/

#include <stdio.h>

int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // 输入数组中的数
    }
    int min = a[0]; // 最小值在数组中
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("%d", min);
    return 0;
}

/*!!!!!
金币问题
输入一个正整数k，表示发金币的天数
输出一个正整数，表示收到的金币数*/

/*#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);
    for (k = 1;;)
    {
        int m;
        m = k
    }
}*/