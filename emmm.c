// c
/*32涓叧閿瓧
auto
break
case
char
const
continr
default
do
double
else
enum
extern
float
for
goto
if
int
long
register
return
short
signed
sizeof
static
struct
switch
typedef
union
unsigned
void
volatile
while
瀛樺偍绫诲瀷锛歛tuo static register extern
鏁版嵁绫诲瀷鐩稿叧锛歝har short int float double signed unsigned struct union enum void sizeof typedef
鎺у埗�?诲瀷鐩稿叧锛�?�f else switch case default for while do break continue goto return
璇存槑绗�?:const volatile
*/
/*浣嶆搷浣滅
&�?�?綅涓�? |�?�?綅�??傛垨(鎺掗櫎鎴�?) ^�?�?綅鎴�?(鍖呭惈鎴�?) 閽堝�?浜岃繘鍒�?
璧�??�?兼搷浣滅�?
+= -= *= /= %= <<= >>= &= |= ^=
鍗曠洰鎿嶄綔绗︼細鍙湁涓€涓搷浣滄暟
锛侀�?昏緫鍙嶆搷浣�?
-璐熷�?�?
+姝ｅ�?�?
&鍙栧湴鍧�?
sizeof 鎿嶄綔鏁�?殑绫诲瀷闀�?害锛堜互瀛�?�妭涓哄崟浣嶏級
~ 瀵逛�?�涓暟鐨勪簩杩涘埗鎸�?�綅鍙栧�?
-- 鍓嶇疆锛屽悗缃�--
++ 鍓嶇疆锛屽悗缃�++
* 闂存帴璁块棶鎿嶄綔绗︼紙瑙ｅ紩鐢ㄦ搷浣滅锛�?
(�?诲�?) �?哄埗�?诲瀷杞崲
鍏崇郴鎿嶄綔绗�
> >= < <= != ==
==	�?�?鏌ヤ袱涓搷浣滄暟鐨�?�?兼槸鍚︾浉绛夛紝濡傛灉鐩哥瓑鍒欐�?浠朵负鐪熴€�?	(A == B) 涓哄亣銆�?
!=	�?�?鏌ヤ袱涓搷浣滄暟鐨�?�?兼槸鍚︾浉绛夛紝濡傛灉涓嶇浉绛�?�垯鏉′�?�涓虹湡銆�	(A != B) 涓虹湡銆�?
>	�?�?鏌ュ乏鎿嶄綔鏁扮殑鍊兼槸鍚﹀ぇ浜庡彸鎿嶄綔鏁�?殑鍊硷紝濡傛灉鏄垯鏉′�?�涓虹湡銆�	(A > B) 涓哄亣銆�?
<	�?�?鏌ュ乏鎿嶄綔鏁扮殑鍊兼槸鍚﹀�?浜庡彸鎿嶄綔鏁扮殑鍊硷紝濡傛灉鏄垯鏉′�?�涓虹湡銆�	(A < B) 涓虹湡銆�?
>=	�?�?鏌ュ乏鎿嶄綔鏁扮殑鍊兼槸鍚﹀ぇ浜庢垨绛�?�簬鍙虫搷浣滄暟鐨勫�?硷紝濡傛灉鏄垯鏉′�?�涓虹湡銆�	(A >= B) 涓哄亣銆�?
<=	�?�?鏌ュ乏鎿嶄綔鏁扮殑鍊兼槸鍚﹀�?浜庢垨绛変簬鍙虫搷浣滄暟鐨勫�?硷紝濡傛灉鏄垯鏉′�?�涓虹湡銆�	(A <= B) 涓虹�?
�?昏緫鎿嶄綔绗�?
&&�?昏緫涓� ||�?昏緫鎴�
鏉′�?�鎿嶄綔绗�(涓�?�洰鎿嶄綔绗�?)
锛燂�?  渚�??�? x ? y : z
�?楀彿鎿嶄綔绗�
锛�
涓�??爣�??曠敤
[]  渚�??�?a[b]
鍑芥暟璋�?�?
()  渚�??�? fun()
缁撴�?鎴愬�?
. ->   渚�??�? a.b a->b  */

/*缁撳悎鎬�?
涓€鑸乏缁撳悎(浠庡乏鍒板彸)
*/

/*c璇█鏀寔涓�?�缁撴�?锛氶『搴忕粨鏋勶紝閫夋�?�缁撴�?锛屽惊鐜粨鏋�
绌鸿鍙�?
琛ㄨ�?�?忚鍙�
鍑芥暟璋�?敤璇彞
澶嶅悎璇彞锛氭垚瀵�?��??鍙烽噷鐨�?�?�?佹�?鎴愪竴涓唬�?佸潡
鎺у埗璇彞锛�?
1.鏉′�?�鍒ゆ柇璇彞涔熷彨鍒嗘�?璇彞锛歩f璇�? switch璇�?
2.寰幆鎵ц璇彞锛歞o while璇�? while璇�? for璇�?
3.杞悜璇彞锛歜reak璇�? goto璇�? continue璇�? return璇�?
#include <stdio.h>
int main()
{
   ;//绌鸿鍙�?

   int a = 10;
   int b =20;
   int c = 0;
   c = a + b;//琛ㄨ�?�?忚鍙�
   printf("hehe\n");//鍑芥暟璋�?敤璇彞
   return 0;
}
#include <stdio.h>

void print(int arr[], int sz) //鍑芥暟鐨勨激鎷彿涓殑浠ｇ爜涔熸�?鎴愬鍚堣鍙�
{
    int i = 0;
    for(i=0; i<sz; i++)
{
    printf("%d ", arr[i]);
}
}

#include <stdio.h>

int main()
{
   int num = 3;
   if (num == 3)  //涓洪槻�?�㈤敊璇紝鍙啓鎴�?(3 == num)
       printf("hehe\n");//娉ㄦ�?==涓嶈兘鍐欐垚=锛屼笉鐒舵棤璁簄um=澶氬�?�?藉彲浠ユ墦鍗�?

    return 0;
}
*/
// 111111闄愬畾瀹藉�?#include <stdio.h>
// int main()
//{
//     printf("%5d\n", 123); 榛�?�鍙冲�?榻愶紝�?�﹀�?榻愯鍦�?%鍔犱�?-
//     return 0;
// }

/*\n 鎹㈣�?
%d\n 鎵撳嵃鏁板瓧
%c\鎵撳嵃瀛�?�瘝锛屽瓧姣嶈�?ㄥ崟�?曞彿
%s\鎵撳嵃瀛�?�垨鑰呭瓧绗�?*/

// 222222灏忔�?#include <stdio.h>
// int main()
//{
//     printf(" Number is %.3f\n", 0.5);
//   return 0;
//
// }

// 333333�?绘槸鏄剧ず�?�ｈ礋鍙�?#include <stdio.h>
// int main()
//{
//     printf("%+d\n", 12);
//     return 0;
// }

/*444444闄愬畾灏忔暟瀹藉害浣嶆暟#include <stdio.h>
int main()
{
    printf("%*.*f\n", 4, 3, 0.5);
    return 0;

}*/

/*555555杈撳�?�?ㄥ垎瀛�?�涓�#include <stdio.h>
int main()
{
    printf("%.5s\n", "hello world");
    return 0;
}*/

/*6666666scanf鍑芥�?
绋�??�?杩愯鍒拌繖涓鍙ユ�?�浼�?仠涓�?潵锛岀瓑�?�呯敤鎴蜂粠閿洏杈撳叆
�?ㄦ埛杈撳叆骞舵寜涓�??洖杞﹀悗scanf锛堬級灏变細澶勭悊鐢ㄦ埛鐨勮�?鍏ワ紝灏嗗叾瀛樺叆鍙橀�?
闇€瑕佺粰鍙橀噺杈撳叆鍊煎氨鍙互鐢╯canf鍑芥�?*/
/*#include <stdio.h>
int main()
{
    int score = 0;
    printf("璇疯�?鍏ユ垚缁╋細");
    scanf("%d", &score);
    printf("鎴愮哗鏄細%d\n", score);
    return 0;
}*/
/*7777777#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    float x = 0.0;
    float y = 0.0;
    鍓嶉潰涓ょ粍鏄暣鏁�?紝鍚庨潰涓ょ粍鏄诞鐐�?�暟
  eg鍙�1 -20 3.4 -4.0e3锛堢瀛﹁鏁版硶锛�
  scanf 澶勭悊鏁板€煎崰浣嶇鏃朵細鑷姩杩囨护绌虹櫧瀛�?�锛屽寘鎷┖鏍硷紝鍒惰〃绗︼紝鎹㈣绗︾瓑
  �?ㄦ埛浣跨敤鍥炶溅閿皢杈撳叆鍒嗕负鍑犺涔熷彲浠�?
  scanf鍘熺悊鏄皢�?ㄦ埛杈撳叆鍏堟斁鍏ョ紦瀛橈紝绛夊埌鎸�?�笅鍥炶溅閿寜鐓у崰浣嶇瀵圭紦瀛�?�繘琛岃В璇�
    scanf("%d%d%f%f", &i, &j, &x, &y);
    printf("%d %d %f %e\n", i, j, x, y);
    return 0;
}*/

// 8888888#include <stdio.h>

/*int main()
{
    int x;
    float y;
    scanf("%d%f", &x, &y);
    printf("%d %e\n", x, y);
    eg杈撳�? -13.45e12# 0
    %d浼氳嚜鍔ㄥ拷鐣ヨ捣棣�?殑绌烘牸锛屼�?-璇�?�彇锛岃鍙栧埌-13鍋滄锛屽洜涓哄悗闈㈢殑.涓嶅睘浜庢暣鏁扮殑鏈夋晥瀛�?�
    鑰�%e浼氳鍙栧埌.45e12,鑰屽悗闈�?#涓嶅睘浜庢诞鐐�?�暟锛堣繖鏄疄鏁扮殑绉戝璁℃暟娉曡〃杈惧舰�?忥級

鎵╁睍锛侊紒锛侊紒锛侊紒锛侊紒锛侊紒锛侊紒锛侊紒锛�%f 浠ュ崄杩涘埗褰㈠紡杈撳嚭 float �?诲瀷锛�?
%lf 浠ュ崄杩涘埗褰㈠紡杈撳嚭 double �?诲瀷锛�?
%e 浠ユ寚鏁板舰�?忚緭鍑� float �?诲瀷锛岃緭鍑虹粨鏋滀腑鐨�? e 灏忓啓锛�?
%E 浠ユ寚鏁板舰�?忚緭鍑� float �?诲瀷锛岃緭鍑虹粨鏋滀腑鐨�? E 澶у啓锛�
%le 浠ユ寚鏁板舰�?忚緭鍑� double �?诲瀷锛岃緭鍑虹粨鏋滀腑鐨�? e 灏忓啓锛�?
%lE 浠ユ寚鏁板舰�?忚緭鍑� double �?诲瀷锛岃緭鍑虹粨鏋滀腑鐨�? E 澶у啓銆�
%g 鍜� %lg 鍒嗗埆鐢ㄦ潵杈撳�? float �?诲瀷鍜�? double �?诲瀷锛屽苟涓斿綋浠ユ寚鏁板舰�??忚緭鍑烘椂锛宔灏忓啓銆�
%G 鍜� %lG 涔熷垎鍒敤鏉ヨ�?鍑� float �?诲瀷鍜�? double �?诲瀷锛屽彧鏄綋浠ユ寚鏁板舰�??忚緭鍑烘椂锛孍澶у�?
锛�

鍗犱綅绗�?%c锛氬瓧绗�?
%d锛氭暣鏁�?
%s锛氬瓧绗︿�??
鍑烘�?%c涔�??閮戒細鑷姩蹇界暐璧烽鐨�?┖鐧藉瓧绗�
濡傛灉鎯冲己鍒惰烦杩囩┖鐧藉瓧绗﹀彲浠ュ啓鎴恠canf锛堚�?�? %c鈥濓�?&zh锛�?�篃灏辨槸鍦�?%鍓嶉潰鍔犱釜绌烘�?
鑰�%s鏄粠绗�?�涓潪绌虹櫧瀛�?��?�?�?�?璧凤紝鐩村埌閬囧埌绌虹櫧瀛�?�eg绌烘牸锛屾崲琛岀锛屽埗琛ㄧ绛�?
鎵€浠�%s涓嶉�?傚悎璇�?�彇澶氫釜鍗曡瘝闄ら�?澶氫�?%s杩炵�?
涔熷氨鏄锛�?�canf涓嶉�?傚悎璇�?�彇鍙兘鍖�?惈绌烘牸鐨勫瓧绗︿�?�锛屽涔﹀悕锛屾瓕鏇�
鍙﹀锛宻canf�?囧埌%s鍗犱綅绗﹂�?�浠斿瓧绗︿覆鍙橀噺鏈熬鍌ㄥ瓨搴旇绌哄瓧绗�?0

    return 0;
} */

/*9999999#include <stdio.h>

int main()
{
    char name[11];
    scanf("%10s", name);
    printf("%s\n", name);
    return 0;

    scanf鍑芥暟璇诲彇瀛�?�鏁扮粍鏃朵笉浼氭鏌ュ瓧绗︿覆鏄惁瓒呰繃浜嗘暟缁勯暱搴︼紝搴旇鐢�?%[m]s�?�?厤锛�?
鍏朵腑[m]鏄竴涓暣鏁帮紝鏍�?瘑璇诲彇瀛�?�涓茬殑鏈�?澶ч暱搴︼紝鍚庨潰鐨勫瓧绗﹀皢浼氳涓㈠�?
}*/

/*#include <stdio.h>

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%d %d %d\n", year, month, day);
    return 0;
}
    璧�??�?煎拷鐣ョ�?
    灏辨槸鍦�?%鍚庡�?*   %*c鍗冲�?%c�?�?%鍚庨潰鍔犲叆*
    琛ㄧず杩欎釜鍗犱綅绗︽病鏈�?�搴旂殑鍙橀噺锛屼笉蹇呰繑鍥�?
    eg %d-%d-%d
   鍙樻�?%d%*c%d%*c%d   */

/*getchar鎺ュ彈鍗曚釜瀛�?�
#include <stdio.h>

int main()
{
    int zh;
    zh = getchar();//绛�?�簬scanf("%c", &zh)
    printf("%c\n", zh);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int len = 0;
    while (getchar() != '\n')
    {
            len++;
    }
    printf("%d\n", len);
    return 0;
}
涓婇潰鐨�?ず渚嬩腑锛屽彧鏈夎鍒版崲琛岀鎵嶄細�?�?鍑哄惊鐜紝�?哥敤鏉ヨ烦杩囨煇琛�
while寰幆鐨�?惊鐜綋娌℃湁浠讳綍璇彞锛岃〃绀哄璇ヨ涓嶆墽琛屼换浣曟搷浣�
gechar姣忚鍙栦�?�涓瓧绗︼紝闀�?害鍙橀噺len灏变細鍔�?1锛岀洿鍒拌鍙栧埌鎹㈣绗︿负�?��
*/

/*璺宠繃绌烘牸瀛�?�#include <stdio.h>

int main()
{
    int zh = 0;
    while((zh = getchar()) == ' ')    ''閲岄潰灏辨槸绌烘牸鍗�?' '杩欐牱灏�?烦杩囩┖鏍间�?
    {
        ;
    }
    printf("%c\n", zh);
    return 0;
}*/

/*putchar    EOF=end of file
鍙�?鍑轰竴涓瓧绗�
#include <stdio.h>

int main()
{
    int zh = 0;
    zh = getchar();
    putchar(zh);   绛�?�悓浜巔rintf("%c", zh)
    return 0;
}*/

/*鍔犲噺杩�?�?
#include <stdio.h>

int main()
{
    int a = 5 + 6;
    int b = 4 - 1;

    printf("a = %d\nb = %d\n", a, b);

    int c= a + b;
    printf("c = %d\n", c);
    return 0;
}*/

/*涔橀櫎杩�?�?
#include <stdio.h>

int main()
{
    int num = 5;
    int a = 6/4;
    float b  = 6/4;   //鏁存暟澶�?暣鏁板緱鏁存�?
    float c = 6.0/4;  //鏈�?�皬鏁板氨�?��?��?鏁�
    printf("c = %f\n", c);
    printf("b = %f\n", b);
    printf("a = %d\n", a);
    printf("%d\n", num * num);
    return 0;
}*/

/*
#include <stdio.h>

int main()
{
    int score = 5; //鍙兘浼�?�?澶辩簿搴︼紝鍙�?float
    score = (score / 20.0) * 100; //娉ㄦ剰鏄�?20.0涓嶆�?20锛屽鏋滄槸20锛岄偅涔堝氨鏄�0
    printf("%d\n", score);
    return 0;
}*/

/*鍙栨ā鍙婃璐熷喅瀹氳鍒�?  鍗冲彇浣欙紒锛侊紒锛侊紒
#include <stdio.h>

int main()
{
    int a = 6/4;
    int b = 6%4;
    printf("a=%d b=%d\n", a, b);//鍙栨ā涓ょ�?鍙兘鏄暣鏁扮�?鍨�?�紝涓嶈兘鏄皬鏁�
    printf("%d\n", 11 % -5);//1
    printf("%d\n", -11 % -5);//-1
    printf("%d\n", -11 % 5);//-1  鍙栨ā姝ｈ礋鐢辩涓€涓暟瀛�?�殑姝ｈ礋鍐冲畾
    return 0;
}*/
//++鏄竴绉嶈嚜澧�1鐨勬搷浣滅
//--鏄竴绉嶈嚜鍑�1鐨勬搷浣滅
/*#include <stdio.h>

int main()
{
   int a = 10;
   int b = ++a;//鍒嗕负鍓嶇疆++鍜屽悗缃�?++锛�++a鍗冲墠缃紝a++鍗冲悗缃�?      --鍚岀�?
   //鍚庣�?++锛屽厛浣跨敤锛屽�?+1    鍓嶇�?++锛屽�?+1锛屽悗浣跨敤
   //b=a    a=a+1           a=a+1   b=a
   printf("a=%d b=%d\n", a, b);
   return 0;
}*/

/*璧�??�?兼搷浣滅�?  =
鑰�==鏄垽鏂浉绛�
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 0;
    if(a>0)
        b = 100;
    else
        b = -100;
    printf("%d %d\n", a, b);
    return 0;
}*/

/*澶嶅悎璧�?�?肩
i +=3  鍗砳 = i +3
i -=3  鍗砳 = i -3
i /=3  鍗砳 = i / 3
i *=3  鍗砳 = i * 3
i %=3  鍗砳 = i % 3
杩炵画璧�?�?�?
int a = 3;
int b = 5;
int c = 0;
c = b = a + 3;
浣嗘渶濂芥�?��??�?鏉ュ�?(瀹�?��?�鐞嗚�?)
b = a + 3;
c = b;*/

// sizeof鍑芥�?
// 璁＄畻鎵�?鍗犲瓧鑺傛暟
// 浣跨敤褰㈠紡鏈塻izeof(�?诲�?)鍜�?�izeof 琛ㄨ�?�?�?
/*#include <stdio.h>
int main()
{
    int a = 10;
    int arr[10] = {0};
    printf("%d\n", sizeof(int));//int�?诲瀷鍙橀噺瑕佸崰鎹�4涓瓧鑺�?
    printf("%d\n", sizeof(a));//a杩欎釜鍙橀噺瑕佸崰鎹�4涓瓧鑺�?
    printf("%d\n", sizeof a);
    printf("%d\n", sizeof(arr));


    return 0;

}*/

/*sizeof瑙勫畾涓烘棤绗﹀彿鏁存暟锛屾病鏈夎瀹氬叿浣撶殑�?诲瀷锛岃€屾槸鐣欑粰绯荤粺鑷繁鍐冲畾
鍙兘鏄痷nsigned int ,unsigned long ,unsigned long, unsigned long long,
瀵瑰簲鐨刾rintf()鍗犱綅绗﹀垎鍒槸%u, %lu ,%llu,杩欐牱涓嶅埄浜庣▼搴忕殑鍙Щ妞嶆�?�?
c璇█鎻�?緵浜嗕�?�涓В鍐�?柟娉曞垱�?犱簡涓€涓�?鍨�??埆鍚峴ize_t,�?ㄦ潵缁熶竴琛ㄧずsizeof鐨勮繑鍥炲€肩�??�?�?=zd or zu
size_t鑳藉琛ㄧず鐨勬暣鏁拌寖鍥碵0, SIZE_MAX]
濡傛灉褰撳�?�绯荤粺涓嶆�?鎸�%zd or %zu ,鍙互鐢�?%u (unsigned int) or %lu (unsigned long int)浠ｆ�?
#include <stdio.h>

int main()
{
    int a = 20;
    printf("%zd\n", sizeof(int));//4     鎵撳嵃鏍煎紡zd
    printf("%zd\n", sizeof(a));//4
    printf("%zd\n", sizeof a);//4
    printf("%zd\n", sizeof(3.14));//8    3.14 鐩存帴鍐欏嚭鐨勫�?鏁帮紝杩欑鏁板瓧浼氳缂栬瘧鍣ㄧ洿鎺ヨ瘑鍒负double�?诲�?
    printf("%zd\n", sizeof(3.14f));//4   鍚庨潰鍔犱簡f锛屽氨鍙樻垚浜唂loat�?诲�?
    printf("%zu\n", sizeof('i hate you'));//涓嶄細鍟�?
    return 0;
}    */

// signed鍜寀nsigned
// �?ㄦ潵淇グchar short int long 绛�?�暣鍨�??鏃忕殑�?诲�?
// signed琛ㄧず涓�?涓�?鍨�??�?鏈�?�璐熷彿锛屼�?�鑸笉�?igned鎴栬�?卽nsigned榛�?�琛ㄧずsigned
// unsigned鍙〃绀�?浂鍜屾鏁存暟锛�?!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!printf鎵撳嵃鏃剁敤%u锛屽澶т竴鍊嶈〃绀虹殑鏈€澶ф暣鏁板�?�?
// 娉ㄦ剰锛宑har�?诲瀷�?��?�鏄惁甯︽湁姝ｈ礋鍙风敱褰撳墠绯荤粺鍐冲畾锛岀粷澶ч儴鍒嗛兘鏄�?璁igned char

/*鍙崇Щ锛屽乏绉绘搷浣滅�?
#include <stdio.h>

int main()
{
    int a = 10;
    int b = a >>1;//鍙崇Щ鎿嶄綔绗�?>>锛岀Щ鍔ㄧ殑鏄簩杩涘埗鐨�?綅锛屽瓨鍌ㄥ�?鍐呭瓨涓殑琛ョ爜鐨�?簩杩涘埗浣�,宸︾Щ鎿嶄綔绗�?<<
    printf("%d %d", a, b);
    return 0;
}*/
/*if璇�?
1.if( 琛ㄨ�?�?�? )
      璇�?*/
/*#include <stdio.h>

int main()
{
    int num = 0;
    printf("璇疯�?鍏ヤ竴涓暟锛�");
    scanf("%d", &num);
    if(num%2 == 1)
       printf("%d 鏄鏁癨n", num);
    else
       printf("%d 鏄伓鏁癨n", num);

    return 0;

}*/

/*#include <stdio.h>

int main()
{
    int age = 0;
    printf("璇疯�?鍏ュ勾榫勶細\n");
    scanf("%d", &age);
    if(age>=18)
       printf("鎴愬勾\n");
    else
       printf("鏈垚骞碶n");

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if(age >= 18)
    {  printf("鎴愬勾浜哱n");
       printf("鍙互浜も�?�鏈�?弸浜哱n");//澶氭�?璇彞鏃惰�?ㄥぇ鎷彿{}鎵╄捣鏉�?紒锛侊紒锛�
    }
    else
    {  printf("鏈垚骞碶n");
       printf("涓嶈兘璋堟亱鐖盶n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    if(num == 0)
       printf("杈撯紛鐨�?暟瀛�?�槸0\n");
    else if(num > 0) //杩欌茎鐨刬f 鐩�?�綋浜庡祵濂楀湪els璇彞涓紝褰㈡垚浜嗗祵濂�?�粨鏋� 涔熷彲浠�?
       printf("杈撯紛鐨�?暟瀛�?�槸姝ｆ暟\n");
    else
       printf("杈撯紛鐨�?暟瀛�?�槸璐熸暟\n");
    return 0;
}*/

/*涔熷彲浠�?
    else
    {
        if(num>0)
           printf("");
        else
           printf("");
    }          */

/*#include <stdio.h>
    int main()
{
    int num = 0;
    scanf("%d", &num);
    if(num>0)
    {
    if(num%2 == 0)
       printf("鍋舵暟\n");
    else
       printf("濂囨暟\n");
    }
    else
    {
    printf("涓嶆槸�?�ｆ暟\n");
    }
return 0;
}*/

/*#include <stdio.h>

int main()
{
    int age = 0;
    printf("璇疯�?鍏ュ勾榫勶細");
    scanf("%d", &age);
    if(age <18)
       printf("楠氬勾\n");
    else
    {
        if(age <=44)
           printf("鍔冲姩鍔沑n");
        else
        {
            if(age <= 59)
               printf("蹇�?�?浼戜�?\n");
            else
            {
                if(age <=89)
                   printf("杩樻椿鐫�?鍚�?�n");
                else
                   printf("鑰佹�?鐧籠n");
            }
        }
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int age = 0;
    printf("璇疯�?鍏ュ勾榫勶細");
    scanf("%d", &age);
    if(age < 18)
       printf("楠氬勾\n");
    else if(age <= 44)
            printf("鍔冲姩鍔沑n");
    else if(age <= 59)
            printf("蹇�?�?浼戜�?\n");
    else if(age < 89)
            printf("杩樻椿鐫�?鍚�?�n");
    else
        printf("鑰佹�?鐧籠n");
    return 0 ;
}*/
// �?┖else锛宔lse�?绘槸鍜屾渶杩戠殑if鍖归�?
/*#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if(a == 1)
       if(b == 2)
          printf("hehe\n");
    else
        printf("haha\n");//浠€涔堥兘�?�椾笉鍒�?紝闄ら潪�?ㄥぇ鎷彿{}灏嗕笂闈�?竴涓�?f鎷捣鏉�?
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int i = 3;
    int j = 40;
    int k = 5;
                     //搴斿啓涓�? i < j && j < k     &&琛ㄧず骞朵笖
    if (i < j < k)  //杩樻槸浼�?墦鍗板嚭hehe锛屽洜涓哄畠鍏堟墽琛�? i < j涓虹湡杈撳嚭涓�1锛屽嵆鍒ゆ柇1涓巏澶у皬锛侊紒锛侊紒锛侊紒锛侊紒锛侊�?
        printf("hehe\n");

    return 0;

}*/

/*#include <stdio.h>

int main()
{
    int age = 0;
    printf("璇疯�?鍏ュ勾榫勶細");
    scanf("%d", &age);
    if (18 <= age && age <=36)
        printf("闈掑勾\n");

    return 0;
}*/

/*鍏崇郴鎿嶄綔绗�
> 饧や�?杩愮畻绗�?
< 饧╀�?杩愮畻绗�?
>= 饧や�?绛�?�簬杩愮畻绗�?
<= 饧╀�?绛�?�簬杩愮畻绗�?
== 鐩哥瓑杩�?畻绗�?
!= 涓嶇浉绛夎繍绠�?�*/

/*鏉′�?�鎿嶄綔绗�(涓�?�洰鎿嶄綔绗�?)
exp1 ? exp2 : exp3
鏉′�?�鎿嶄綔绗︾殑璁＄畻�?昏緫鏄紝濡傛灉 exp1 涓虹湡锛�? exp2 璁＄畻锛岃绠�?�殑缁撴灉鏄暣涓〃杈惧紡鐨勭粨鏋滐紱
濡傛灉exp1 涓哄亣锛�? exp3 璁＄畻锛岃绠�?�殑缁撴灉鏄暣涓〃杈惧紡鐨勭粨鏋溿€�?
*/

/*#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    //if (a > 5)
    //    b = 3;
    //else
    //    b = -3;

    b = (a > 5 ? 3 : -3);
    printf("b = %d\n", b);
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = (a > b ? a : b);
    printf("%d\n", m);

    //if (a > b)
    //  m = a;
    //else
    //    m = b;
    return 0;

}*/

/*�?昏緫杩愮畻绗�?
鎻愪緵閫昏緫鍒ゆ柇鍔熻兘锛屸�?浜庢�?寤烘洿澶嶆潅鐨勮〃杈惧紡锛屼富瑕佹湁涓�?��?�涓変釜杩愮畻绗︺€�?
鈥� ! 锛氶�?昏緫鍙栧弽杩�?畻绗︼紙鏀瑰彉鍗曚釜琛ㄨ揪�?忕殑�?熷亣锛�?�€�?
鈥� && 锛氫笌杩�?畻绗︼紝灏辨槸骞朵笖鐨勬剰鎬濓紙涓や晶鐨�?〃杈惧紡�?戒负�?燂紝鍒欎负鐪燂紝鍚﹀�?涓哄亣锛夈€�?
鈥� || 锛氭垨杩�?畻绗︼紝灏辨槸鎴�?�?�?殑鎰忔€濓紙涓や晶饩�?�?鏈�?�紑涓〃杈惧紡涓虹湡锛屽垯涓虹湡锛屽惁鍒欎负鍋囷級銆�*/

/*#include <stdio.h>

int main ()
{
    int flag = 0;
    scanf("%d", &flag);
    if (!flag) //涔熷彲浠ュ啓涓�(0 == flag)
    {
        printf("to do something\n");//杈撳�?3鏃�?�紒flag = 0涓哄亣灏变笉鎵撳嵃锛岃緭鍏�0鏃�?�紒flag = 1涓虹湡锛屾墦鍗�
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int month = 0;
    scanf("%d", &month);
    if (month >=3 && month <= 5)
        printf("鏄ュぉ\n");
    else if (month >=6 && month <= 8)
        printf("澶忓ぉ\n");
    else if (month >=9 && month <=11)
        printf("绉�??ぉ\n");
    else if (month == 12 || month == 1 || month == 2)
        printf("鍐ぉ\n");
    return 0;
}*/

/*鍒ゆ柇闂板勾
鑳借4鏁撮櫎涓嶈兘琚�100鏁撮櫎||鑳借400鏁撮�?
#include <stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)//!=涓嶈兘绌烘牸鍒嗗�?
    {
            printf("yes\n");
    }
    else if (year % 400 == 0)
    {
            printf("yes\n");
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
    printf("鏄棸骞碶n");

    return 0;
}*/

/*switch 鍑芥�?
switch (expression)
{
case value1: statement
case value2: statement
default: statement
}
涓娾警浠ｇ爜涓紝鏍规嵁琛ㄨ�?�?�? expression 涓嶅悓鐨�?�?硷紝鎵р緩鐩稿簲�?�? case 鍒嗏絸銆傚鏋滄壘涓嶅埌瀵瑰簲鐨�?�?硷紝灏辨墽饩�? default 鍒嗏�?*/

/*#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num % 3 == 0)
        printf("浣欐暟鏄�?0\n");
    else if (num % 3 == 1)
        printf("浣欐暟鏄�?1\n");
    else
        printf("浣欐暟鏄�?2\n");
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    switch (num % 3)
    {
    case 0:
        printf("浣欐暟鏄�?0\n");//case 鍜屽悗杈�?殑鏁板瓧涔�??棿蹇呴』鏈夌┖鏍�. 姣忊紑涓猚ase璇彞涓殑浠ｇ爜鎵р緩瀹屾垚鍚�?紝闇�?瑕佸姞涓奲reak锛屾墠鑳借烦鍑鸿繖涓猻witch璇�?
        break;
    case 1:
        printf("浣欐暟鏄�?1\n");//switch鍚庣�? expression 蹇呴』鏄暣鍨�??〃杈惧紡   case 鍚庣殑鍊硷紝蹇呴』鏄暣褰㈠父閲忚〃杈惧紡
        break;
    case 2:
        printf("浣欐暟鏄�?2\n");
        break;
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int day = 0;
    scanf("%d", &day);
    switch(day)
{
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("饧綔饨嘰n");
        break;
    case 6:
    case 7:
        printf("浼戞伅饨嘰n");
        break;
    default:
        printf("杈撳叆閿欒\n");//default瀛愬彞锛屽彲瑕佸彲涓嶈
        break;
}
    return 0;
}*/

// while璇彞鐨�?娉曠粨鏋勫拰if璇彞饩父鐩镐技

/*#include <stdio.h>
int main()
{
    while(1)
       printf("hehe\n"); //while鍚庤竟鐨�?�?浠舵弧饩滐紝姝�?�惊鐜殑鎵撳嵃hehe
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = 1; //寰幆鍙橀噺鐨�?垵濮�?寲閮ㄥ垎
    while(i<=5) //寰幆鐨�?垽鏂儴鍒�
    {
        printf("%d ", i);
        i = i+1; //寰幆鍙橀噺鐨�?皟鏁�?儴鍒�?,涔熷彲浠�?++
    }
    return 0;
}*/

/*while涓殑continue
#include <stdio.h>

int main()
{
    int zh = 0;
    while  ((zh = getchar()) != EOF)
    {
        if (zh > '9' || zh < '0')
            continue;      //continue 鏄户缁殑鎰忔�?濓紝鍦ㄥ惊鐜腑鐨勪綔饨ゅ氨鏄烦杩囨湰娆″惊鐜�? continue 鍚庤竟鐨�?�?�?侊紝缁х画杩涒緩涓嬧紑娆″惊鐜殑鍒ゆ柇
        putchar(zh);
    }
    return 0;
}*/

/*while涓殑break
#include <stdio.h>

int main()
{
    int i = 1;
    while(i<=10)
   {
        if(i == 5)
           break;//褰搃绛�?�簬5鍚庯紝灏辨墽饩廱reak锛屽惊鐜氨缁堚綄浜�?
        printf("%d ", i);
        i = i+1;
   }
    return 0;
}*/

/*while缁冧�?12345鍙樻�?54321
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while(n)
    {
        printf("%d", n % 10);
        n = n /10;
    }
    return 0;
}*/

/*for 寰�?
for(琛ㄨ�?�?�?1; 琛ㄨ�?�?�?2; 琛ㄨ�?�?�?3)璇彞锛�?//濡傛灉�?�幆浣撴兂鍖呭惈鏇村鐨勮鍙�?紝鍙互鍔犱笂饧ゆ�??鍙�
琛ㄨ�?�?�?1 饨や�?寰幆鍙橀噺鐨�?垵濮�?�?
琛ㄨ�?�?�?2 饨や�?寰幆缁撴潫鏉′�?�鐨�?垽鏂�?
琛ㄨ�?�?�?3 饨や�?寰幆鍙橀噺鐨�?皟鏁�?*/

/*鎵撳�?1锛�3锛�5锛�7锛�9
#include <stdio.h>

int main()
{
    int i = 0;
        鍒濆鍖�?   鍒ゆ�?      璋冩�?
    for (i = 1 ; i <= 10 ; i+=2)
    {
        printf("%d ", i);
    }
    return 0;
}*/
// 瀵�?�瘮while
/*#include <stdio.h>
int main()
{
    int i = 1; //鍒濆鍖�?
    while(i<=5) //鍒ゆ�?
    {
        printf("%d ", i);
        i = i+1; //璋冩�?,涔熷彲浠�?++
    }
    return 0;
}*/

/*for涓殑break(涓巜hile涓熀鏈竴鏍�?)
#include <stdio.h>

int main()
{
    int i = 0;
        //鍒濆鍖�?   鍒ゆ�?      璋冩�?
    for (i = 1 ; i <= 10 ; i+=2)
    {
        if (i == 5)
            break;
        printf("%d ", i);
    }
    return 0;
}*/

/*for涓殑continue(涓巜hile涓殑涓嶄�?�鏍凤級
#include <stdio.h>

int main()
{
    int i = 0;
        //鍒濆鍖�?   鍒ゆ�?      璋冩�?
    for (i = 1 ; i <= 10 ; i++)
    {
        if (i == 5)
            continue;
        printf("%d ", i);
    }
    return 0;
}*/

/*for缁冧範涓嶆墦鍗�3鐨勫�?嶆暟
#include <stdio.h>

int main()
{
    int i = 0;
        //鍒濆鍖�?   鍒ゆ�?      璋冩�?
    for (i = 1 ; i <= 10 ; i++)
    {
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 0; i <=100 ; i+=3)
    {
        i = i + 3;
        printf("%d", i);

    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    for (i = 1 ; i <= 100 ; i++)//鎴栬�?�? for (i = 3 ; i <=100 ; i += 3),涓�??潰灏变笉闇€瑕� if (i % 3 == 0)浜�
    {
        if (i % 3 == 0)
            sum += i;
    }
    printf("%d ", sum);
    return 0;
}*/

/*do while寰幆c
do
璇�?;
while(琛ㄨ�?�?�?);
do
{
璇�?;//澶氭�?璇彞鐨�?椂鍊欙紝鍔犱笂饧ゆ�??鍙穧while(琛ㄨ�?�?�?);*/

/*#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;

}*/

/*do while 涓�? break
#include <stdio.h>

int main()
{
    int i = 1;       //鍒濆鍖�?

    do
    {
        if(i == 5)
        break;
        printf("%d ", i);
        i = i + 1;    //璋冩�?
    } while(i<=10);  //鍒ゆ�?

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int i = 1;    //鍒濆鍖�?

    do
    {
        if(i == 5)
           continue;

        printf("%d ", i);
        i = i + 1; //璋冩�?
    } while(i<=10);//鍒ゆ�?

    return 0;
}*/

/*do while缁冧範锛�?
杈撯紛饧�?涓鏁存暟锛岃绠楄繖涓暣鏁版槸饧忎綅鏁�?�?
渚�??锛�?
杈撯紛锛�?1234 杈撳�?锛�4
杈撯紛锛�?12 杈撳�?锛�2*/

/*#include <stdio.h>

int main()
{
    int n = 0;
    int cnt = 0;
    scanf("%d", &n);
    do
    {
        cnt++;
        n = n / 10;
    } while (n);
    printf("%d\n", cnt);

    return 0;

}*/

/*閿欒绀鸿寖銆�
#include <stdio.h>

int main()
{
    int n = 0;
    int cnt = 0;
    scanf("%d", &n);
    for (n = 0 , cnt = 0 ; cnt++ , n = n / 10 ; n);
    printf("%d\n", cnt);
    return 0;
}*/

/*寰幆宓屽
@缁冧範锛�?
鎵惧�?100~200涔�??棿鐨�?礌鏁�?紝骞舵墦鍗板�?灞忓箷涓娿€�?
娉細绱犳暟饧滅О璐ㄦ暟锛屽彧鑳借1鍜屾湰饩濇暣闄ょ殑鏁板瓧銆�
1. 浠€涔堟槸绱犳暟锛熺礌鏁颁篃琚О涓鸿川鏁�?紝鏄彧鑳借1鍜屽畠鏈緷鏁撮櫎鐨�?暟銆�?
2. 瑕佷�?100~200涔�??棿鎵惧嚭绱犳暟锛屸靖鍏堝緱鏈�?100~200涔�??棿鐨�?暟锛岃繖饩ュ彲浠ヤ娇饨ゅ惊鐜В鍐炽€�?
3. 鍋囪瑕佸垽鏂璱鏄惁涓虹�?�鏁�?紝闇�?瑕佹�?2~i-1涔�??棿鐨�?暟瀛�?�幓璇曢櫎i锛岄渶瑕佷骇�?�?2~i-1涔�??棿鐨�?暟瀛�?�紝涔熷彲浠ヤ娇饨ゅ惊鐜В鍐炽€�?
4. 濡傛�?2~i-1涔�??棿鏈夋暟瀛�?�兘鏁撮櫎i锛屽垯i涓嶆槸绱犳暟锛屽鏋�?2~i-1涔�??棿鎵�?鏈�?�殑鏁板瓧閮戒笉鑳芥暣闄わ紝鍒檌鏄礌鏁�?�?�?
1浜х敓100~200涔�??棿鐨�?暟瀛�
2鍒ゆ柇i鏄惁涓虹�?�鏁�?
3鎷�2~i-1涔�??棿鐨�?暟瀛�?�潵璇曢櫎i锛岀湅i鏄惁鑳借鏁撮�?*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int count = 0;//璁℃暟鍣�?
    for (i = 100 ; i <=200 ; i++)//鍋舵暟涓嶆槸绱犳暟锛屽彲鍐欐垚for (i = 101 ; i <= 200 ; i += 2)
    {
        int flag = 1;//鍋囪i鏄礌鏁�?
        int j = 0;
        for (j = 2 ; j < i ; j++)//鍙啓鎴恌or (j = 2; j<= sqrt(i) ; j++)
        {                        //sqrt()灏辨槸�??�?骞虫柟闇�?瑕佸ご鏂囦�??#include <math.h>
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount = %d\n", count);

    return 0;
}*/

/*鍒ゆ柇鏄惁涓虹礌鏁�?紒锛侊紒锛侊紒锛�?
i=a*b
a鍜宐涓嚦灏戞湁鏈�?�釜鍥犲瓙鏄�?<=鏍瑰彿i�?�?
*/

/*goto璇彞鍜岃烦杞爣鍙凤紝goto璇彞鍙互瀹炵幇鍦ㄥ悓饧€涓嚱鏁板唴璺宠浆鍒拌缃ソ鐨�?爣鍙峰銆�
goto 璇彞濡傛灉浣库�?鐨勪笉褰擄紝灏变細瀵艰嚧鍦ㄥ嚱鏁板唴閮ㄩ�?�鎰忎贡璺宠浆锛屾墦涔辩▼搴忕殑鎵р緩娴佺▼锛�
鎵€浠ユ垜浠殑寤鸿鏄兘涓嶁�?灏介噺涓嶅幓浣库�?锛�
浣嗘槸goto璇彞涔熶笉鏄紑饨嗘槸澶勶紝鍦ㄥ灞傚惊鐜殑浠ｇ爜涓紝濡傛灉鎯冲揩�?熻烦鍑轰娇饨oto灏扁井甯哥殑饨呬究浜嗐€�?*/

/*goto渚�??�?
#include <stdio.h>

int main()
{
    printf("hehe\n");
    goto end;
    printf("haha\n");
end:         //娉ㄦ�?:锛侊紒锛侊紒锛侊紒锛�?
    printf("璺宠繃浜唄aha鐨勬墦鍗癨n");
    return 0;
}*/

/*for(...)
{
    for(...)
    {
        for(...)
        {
            if(disaster)
               goto error;
        }
    }
}
error://...
鏈潵for寰幆鎯�?彁鍓嶉€�?鍑哄緱浣库饯break锛屸紑涓猙reak鍙兘璺冲嚭饧€灞俧or寰幆锛�?
濡傛�?3灞傚惊鐜祵濂�?�氨�?�椾娇饨�?3涓猙reak鎵嶈兘璺冲嚭寰幆锛屾�?�浠ュ湪杩欑鎯�?喌涓�?垜浠娇�?oto璇彞灏变細鏇村姞鐨�?揩鎹�?�?�?*/

/*饧€缁存暟缁�?垱�?�哄拰鍒濆鍖�
鍙橀噺鐨�?�?鐜�?�娇寰�?�垜浠彲浠ュ瓨鏀惧崟涓殑鏁版嵁锛岄偅鍋�?鎴戜滑鏈�?�紑缁勬暟鎹紝
饨愬锛�?煇涓彮绾х殑鏁板鎴�?哗鏈�?30涓暟鎹紝杩欐椂鍊機璇緮涓粰浜嗏紑涓暟缁�?殑�?�傚康锛�?
鍙互璁╂垜浠垱�?�衡紑鍧楄繛缁殑绌�?棿鏉ュ瓨鏀�?紑缁�?暟鎹€�?

鏁扮粍鐨�?蹇�?
鏁扮粍鏄紑缁勭浉鍚岀�?鍨�??厓绱犵殑闆嗗悎銆�?
浠庤繖涓蹇典腑鎴戜滑灏卞彲浠ュ彂鐜�2涓湁浠峰€肩殑淇℃伅锛�?
鈥� 鏁扮粍涓瓨鏀剧殑鏄�1涓垨鑰�?涓暟鎹�
鈥� 鏁扮粍涓瓨鏀剧殑鏁版嵁锛岀�?鍨�??槸鐩稿悓�?�?

鏁扮粍鐨�?垱�?��
鏁扮粍鍒涘缓鐨勫熀鏈娉曞涓�?�細
 type arr_name[�?搁噺鍊糫;
瀛樻斁鍦ㄦ暟缁勭殑鍊艰绉�?�负鏁扮粍鐨�?厓绱狅紝鏁扮粍鍦ㄥ垱寤虹殑鏃跺€欏彲浠ユ寚瀹氭暟缁�?殑饧も缉鍜屾暟缁�?殑鍏�?礌绫诲瀷銆�?
鈥� type鎸囧畾鐨�?槸鏁�?粍涓瓨鏀�?暟鎹殑�?诲瀷锛屽彲浠ユ槸锛歝har銆乻hort銆乮nt銆乫loat绛�?�紝涔熷彲浠モ緝瀹氫箟鐨�?�?�?�?
鈥� arr_name 鎸囩殑鏄暟缁勫悕鐨�?悕瀛�?�紝杩欎釜鍚嶅瓧鏍�?�嵁瀹為�?�?�?喌锛岃捣鐨勬湁鎰忎箟灏扁緩銆�?
  [] 涓殑甯搁噺鍊兼槸饨ゆ潵鎸囧畾鏁�?粍鐨勨激饧╃殑锛岃繖涓暟缁�?殑饧も缉鏄牴鎹疄闄呯殑闇�?姹�

鏁扮粍鐨�?垵濮�?�?
鏈�?��?�鍊欙紝鏁扮粍鍦ㄥ垱寤虹殑鏃跺€欙紝鎴戜滑闇�?瑕佺粰瀹氣紑浜涘垵�?�?�?煎€硷紝杩欑灏辩О涓哄垵�?�?寲鐨勩€�?
�?ｆ暟缁勫浣曞垵�?�?寲鍛�?紵鏁�?粍鐨�?垵濮�?寲饧�?鑸娇饨も激鎷彿锛屽皢鏁版嵁鏀惧湪饧ゆ�?鍙蜂腑銆�?

鏁扮粍鐨�?�?�?�?
鏁扮粍涔熸槸鏈�?��??鍨�??殑锛屾暟缁勭畻鏄紑绉嶁緝瀹氫箟绫诲瀷锛屽幓鎺�?�暟缁勫悕鐣欎笅鐨勫氨鏄暟缁勭殑绫诲瀷銆�?
濡備笅锛�?
int arr1[10] = {1,2,3};
int arr2[12];
char ch[5] = {'a' , 'b' , 'c'};
arr1鏁扮粍鐨�?�?鍨�??�? int [10]
arr2鏁扮粍鐨�?�?鍨�??�? int[12]//娉ㄦ剰锛�?拰涓婇潰鐨勬暟缁�?�?鍨�?�笉涓€鏍凤紒锛侊紒锛佹槸鍏�?礌涓�?鏍凤紒锛侊紒锛�
zh 鏁扮粍鐨�?�?鍨�??�? char [5]*/

/*#include <stdio.h>

int main()
{
    int math[20];
    double score[10];
    char zh[5];
    short age [20];

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int arr1[5] = {1,2,3,4,5};//瀹屽叏鍒濆鍖�
    int arr2[5] = {1,2,3};//涓嶅�?鍏ㄥ垵濮�?�? - 娌℃湁鍒濆鍖栫殑鍏�?礌锛屼細榛�?�鍒濆鍖栦负0
    //int arr3[3] = {1,2,3,4};//閿欒鍒濆鍖�
    int arr5[] = {1,2,3,4,5,6};

    return 0;
}*/

/*饧€缁存暟缁�?殑浣库饯
涓娾紑涓缉鑺傛垜浠涔犱簡饧€缁存暟缁�?殑鍩烘湰璇硶锛屸紑缁存暟缁�?彲浠ュ瓨鏀�?暟鎹紝瀛樻斁鏁�?粍鐨勨浆鐨勬槸瀵�?�暟鎹殑鎿�?
浣滐紝閭ｆ垜浠浣曚娇饨も紑缁存暟缁勫憿锛�?
1. 鏁扮粍涓�?�?
C璇�?涓瀹氭暟缁�?槸鏈変笅鏍囩殑锛屼笅鏍囨槸浠�?0�?�?�?�?殑锛屽亣璁炬暟缁�?湁n涓厓绱狅紝鏈€鍚庘紑涓厓绱犵殑涓�?爣鏄�?-1锛屼笅鏍囧氨鐩�?�綋浜庢暟缁�?厓绱犵殑缂栧彿锛屽涓�?�細*/

/*#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", arr[3]);
    printf("%d\n", arr[7]);
    arr[4] = 15;
    printf("%d\n", arr[4]);//15

    return 0;
}*/

// 鎵撳嵃鏁�?粍涓叏�?ㄥ厓绱�
/*#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //浜х敓0~9鐨勪笅鏍�?
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

// 鏁扮粍鐨�?�?鍏�
/*@
#include <stdio.h>

int main()
{
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr[10] = {0};//榛�?�鎶婃墍鏈夋暟瀛�?�垵濮�?寲涓�?0
    //杈撳叆鍊煎埌鏁扮粍涓�?
    int i = 0;
    for (i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    //杈撳�?鏁扮粍涓殑鍊�
    for (i = 0 ; i < 10 ; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

// 饧€缁存暟缁�?�?鍐呭瓨涓殑瀛樺�?
// 鎵撳嵃鏁�?粍鍏�?礌鐨�?湴鍧�?

/*#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    for (i = 0; i < 10 ; i++)
    {
        printf("&arr[%d] = %p\n", &arr[i]);//%p涓庡彇鍦板潃&瀵瑰�?
    }

    return 0;
}*/

/*sizeof璁＄畻鏁�?粍涓厓绱犱釜鏁�?
#include <stdio.h>

int main()
{
    int arr[10] = {0};
    //printf("%zd\n", sizeof(arr));
    //printf("%zd\n", sizeof(int[10]));//璁＄畻鏁�?粍鐨�?�?诲ぇ灏忥紝鍗曚綅鏄瓧鑺�?
    //printf("%d\n", sizeof(arr[0]));

    int sz = sizeof(arr) / sizeof(arr[0]);//璁＄畻鐨�?槸鏁�?粍鐨�?鍏�?礌涓暟
    printf("%d\n", sz);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0 ; i < sz ; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

/*饧嗙�?鏁扮粍鍒涘缓鍜屽垵濮�?�?
1. 饧嗙�?鏁扮粍鐨�?蹇�?
鎴戜滑鍓嶁�?�瀛︿範鐨�?暟缁�?绉颁负饧€缁存暟缁勶紝鏁扮粍鐨�?厓绱犻兘鏄唴缃�??鍨�??殑锛�?
濡傛灉鎴戜滑鎶娾紑缁存暟缁勫仛涓烘暟缁勭殑鍏�?礌锛岃繖鏃跺�?欏氨鏄紗缁存暟缁勶�?
饧嗙�?鏁扮粍浣滀负鏁�?粍鍏�?礌鐨�?暟缁�?绉颁负涓�?�淮鏁扮粍锛屸紗缁存暟缁�?互涓婄殑鏁扮粍缁熺О涓哄缁存暟缁勩€�?
2.饧嗙�?鏁扮粍鐨�?垱�?��*/

/*#include <stdio.h>

int main()
{
    float score[3][25];
    int arr[3][5] = {1, 2};                                     // 涓嶅�?鍏ㄥ垵濮�?寲锛屽墿浣欑殑鏁板瓧榛�?�涓�0
    int arr[3][5] = {{1, 2, 3, 4, 5}, {1, 2, 3}, {1, 2, 3, 4}}; // 鎸囧畾鍒楃殑涓嶅�?鍏ㄥ垵濮�?�?
    // 浜岀�?鏁扮粍濡傛灉鍒濆鍖栦簡锛岃鍙互�?佺暐锛屽�?涓嶈兘鐪侊紒
    int arr[][5] = {{1, 2}, {0}, {0}};    // 3琛�
    int arr[][5] = {1, 2, 3, 4, 5, 6, 7}; // 2琛�
    int arr[][5] = {1, 2, 3};             // 1琛�

    return 0;
}*/
/*
1. 饧嗙�?鏁扮粍鐨�?笅鏍�?
2. 饧嗙�?鏁扮粍鐨�?�?饧婂拰杈撳嚭*/

/*#include <stdio.h>
int main()
{
    int arr[3][5] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7};
    printf("%d\n", arr[0][3]);//琛屼笅鏍囧拰鍒椾笅鏍�?兘鏄粠0�?�?�?�?
    printf("%d\n", arr[2][3]);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int arr[3][5] = {0};
    // 缁欐暟缁�?腑渚濇15涓�?硷紝鏀惧湪浜岀�?鏁扮粍鐨�?瘡涓厓绱犱�?
    int i = 0;
    // 杈撳�?
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (i = 0; j < 5; j++)//閿欒锛宩鎬庝箞鍙樻垚i浜�
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // 杈撳�?

    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int arr[3][5] = {0};
    int i = 0; // �?嶅巻饩�
    // 杈撯�?
    for (i = 0; i < 3; i++) // 浜р剑饩忓彿
    {
        int j = 0;
        for (j = 0; j < 5; j++) // 浜р剑鍒楀�?
        {
            scanf("%d", &arr[i][j]); // 杈撯紛鏁版嵁
        }
    }
    // 杈撳�?
    for (i = 0; i < 3; i++) // 浜р剑饩忓彿
    {
        int j = 0;
        for (j = 0; j < 5; j++) // 浜р剑鍒楀彿{
        {
            printf("%d ", arr[i][j]); // 杈撳�?鏁版�?
        }
    }

    return 0;
    }*/