/*
 * 编程找出1000以内的所有完数。
 *
 * 一个数如果恰好等于它的因子之和，这个数就称为"完数"。
 * 例如6=1＋2＋3.
 */

#include <stdio.h>

int main(void){
    int i = 0;
    int j = 0;
    int sum = 0;
    int k = 0;
    int n = 0;
    
    int arr[256];
    
    for(i=2; i<1000; i++){
        sum = 1;
        arr[0] = 1;
        k = 0; //必须这么搞！
        
        for(j=2; j<=(i/2); j++){
            if(i % j == 0){
                sum += j;
                arr[++k] = j; //必须这么搞！
            }
        }
        
        if(sum == i){
            printf("%d = 1", i);
            for(n=1; n<=k; n++){
                printf("+%d", arr[n]);
            }
            printf("\n");
        }
        
    }
    
    
    return 0;
}
