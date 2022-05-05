/*
 * 打印出如下图案（菱形）
 *
 * *
  ***
 *****
*******
 *****
  ***
   *
 */

#include <stdio.h>

int main(void){
    int i; // 控制行数
    int j; // 控制空格的个数
    int k; // 控制*号的个数
    
    // 前四行是一种规律
    for(i=0; i<4; i++){
        
        for(j=0; j<=2-i; j++){
            printf(" ");
        }
        
        for(k=0; k<=2*i; k++){
            printf("*");
        }
    
        printf("\n");
        
    }
    
    // 后四行又是另一种规律
    for(i=0; i<3; i++){
        
        for(j=0; j<i+1; j++){
            printf(" ");
        }
        
        for(k=0; k<(5-2*i); k++){
            printf("*");
        }
    
        printf("\n");
        
    }
    
    return 0;
}
