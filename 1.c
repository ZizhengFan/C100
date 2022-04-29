/**
 * @file 1.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * 可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去掉不满足条件的排列。
 */

#include <stdio.h>

int main(void){
    int i, j, k;
    int rst = 0;
    int count = 0;

    printf("The result will be: \n");
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            for(k=1; k<5; k++){
                if(i!=j && j!=k &&i!=k){
                    count++;
                    rst = (100 * i) + (10 * j) + k;
                    printf("%d\n", rst);
                }
            }
        }
    }
    printf("The total number is: %d\n", count);
    return 0;
}