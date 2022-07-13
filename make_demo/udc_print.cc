#include <stdio.h>
#include <math.h>

int main()
{
    printf("%i\n",123); //  输出123  d/i	 int  输出十进制有符号32bits整数，i是老式写法
    printf("%d\n", -5); // 输出-5
    printf("0%o\n",123); //  输出0173  o  unsigned int	无符号8进制(octal)整数(不输出前缀0)
    printf("%u\n",123); // 输出123  u	unsigned int	无符号10进制整数
    printf("%u\n", -5);  // 输出 4294967291
    printf("0x%x 0x%X \n",123,123); // 输出0x7b 0x7B  x/X	unsigned int 无符号16进制整数，x对应的是abcdef，X对应的是ABCDEF（不输出前缀0x)
    printf("%.9f %.9lf \n",0.000000123,0.000000123);  // 单精度浮点数用f,双精度浮点数用lf(printf可混用，但scanf不能混用) 输出0.000000123 0.000000123。注意指定精度，否则printf默认精确到小数点后六位
    printf("%f %F %f %F\n",INFINITY,INFINITY,NAN,NAN);  // F 与f格式相同，只不过 infinity 和 nan 输出为大写形式。
    printf("%e %E \n",0.000000123,0.000000123); // 输出1.230000e-07 1.230000E-07  科学计数法，使用指数(Exponent)表示浮点数，此处”e”的大小写代表在输出时“e”的大小写
    printf("%g %g \n",0.000000123,0.123);  // 输出1.23e-07 0.123  根据数值的长度，选择以最短的方式输出，%f或%e
    printf("%G %G \n ",0.000000123,0.123); // 输出1.23E-07 0.123
    printf("%c\n",64); // 输出A,但实际输出的是" @"  字符型。可以把输入的数字按照ASCII码相应转换为对应的字符
    printf("%s","测试test"); // 输出：测试test  字符串。输出字符串中的字符直至字符串中的空字符（字符串以空字符’\0‘结尾）
}