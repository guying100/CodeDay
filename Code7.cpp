//
// Created by LuMengLi on 2020/6/24.
//
//
// Created by LuMengLi on 2020/6/24.
//
/**
 * 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
示例 1:
输入: 123
输出: 321
 * @param x
 * @return
 */
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int reverseImp(int x) {
    //统计传入整数的位数
    int count = 0,y=x;
    while ((y = y / 10) >= 1)
        count++;
    count++;
    int target=0;
    for (int i = 0; i <count; i++) {
        int a=x/pow(10,i);
        int index=a%10;
        long int temp=target+index*pow(10,count-i-1);
//        printf("%d\n",temp);
        if (temp<-INT_MAX|| temp>INT_MAX){
            target=0;
            break;
        }
        target=temp;
    }
//    char string[count];
//    //整数型转为字符串
//    itoa(x,string,10);
//    //输出字符串
//    for (int i = 0; i <count ; i++) {
//        printf("%c\n",string[i]);
//    }
//    //将反转后的字符串转为整数型
//    int target=0;
//    for (int k = count-1; k >=0; k--) {
//        target=target+(string[k]-'0')*pow(10,k);
//    }
//    printf("%d\n",target);
    return target;
}
int reverse(int x) {
   int res=0;
   if (x>0){
       res=reverseImp(x);
   }else{
       res=0-reverseImp(abs(x));
   }
   return res;
}
int main(){
    int x=1534236469;
    printf("%s\n","hello");
    printf("%d\n",reverse(x));
    printf("%d\n",INT_MAX);
    return 0;
}






