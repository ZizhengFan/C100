/*
 * 输入两个正整数m和n，求其最大公约数和最小公倍数
 *
 * 最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数
 * 求最大公约数用辗转相除法（又名欧几里德算法）
 */

#include <stdio.h>

int main(){
    int a;
    int b;
    int temp, temp1;
    int gcd, lcm;
    int mul;
    
    printf("Enter: ");
    scanf("%d %d", &a, &b);
    
    gcd = 0;
    mul = a * b;
    
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    
//    if (a == b) {
//        gcd = a;
//        lcm = b;
//    }
    
    temp1 = a % b;
    
    while (temp1 != 0){
        a = b;
        b = temp1;
        temp1 = a % b;
    }
    
    gcd = b;
    lcm = mul / gcd;
    printf("gcd = %d, lcm = %d.\n", gcd, lcm);
    
    
    return 0;
}
