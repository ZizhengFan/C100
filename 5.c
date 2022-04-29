/**
 * @file 5.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 输入三个整数x,y,z，请把这三个数由小到大输出。
 * @version 0.1
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 * 我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，
 * 然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
 */

#include <stdio.h>

int main(void){
    int a, b, c;
    int smallest, highest, left;

    printf("Enter three numbers here: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;

    //Method 1
    smallest = (((a<b) ? a : b) < c) ? ((a<b) ? a : b) : c;
    highest = (((a>b) ? a : b) > c) ? ((a>b) ? a : b) : c;
    left = sum - smallest - highest;

    printf("The sequence of smallest, middle and highest of three will be"
    " %d, %d, %d\n", smallest, left, highest);
    
    return 0;
}