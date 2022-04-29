/**
 * @file 3.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void){
    int i = 0;
    int j = 0;

    int temp = 0;

    int m = 0;
    int n = 0;

    int rst = 0;

    /*
     * You can see that (m+n) = i; (m-n) = j; and i*j = 168; 
     * Then i and j must be even both or one even one odd;
     * But 2m = i + j; 2n = i - j; thus, i and j should both be even
     * And they also have to <168
    */

   //Method 1
    // for(i=2; i<=168/2; i+=2){
    //     for(j=2; j<=168/2; j+=2){
    //         temp = i * j;
    //         if(temp == 168){
    //             printf("%d * %d = 168 \n", i, j);
    //             printf("\n");

    //             m = (i+j)/2;
    //             rst = (m*m) - 268;

    //             printf("The result will be %d.\n", rst);
    //             printf("\n");
    //         }
    //     }
    // }

    //Method 2
    for(i=2; i<=168/2; i+=2){
        if(168%i == 0){
            j = 168 / i;

            if(i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0){
                m = (i + j) / 2;
                n = (i - j) / 2;
                rst = n * n - 100;

                printf("%d + 100 = %d * %d \n", rst, n, n);
                printf("%d + 268 = %d * %d \n", rst, m, m);
                
            }
        }
    }

    return 0;
}