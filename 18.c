/*
 * 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
 * 例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
 *
 * 关键是计算出每一项的值
 */

#include <stdio.h>
#include <math.h>

int main(void){
    int sum = 0;
    int a, n;
    int temp = 0;
    int i = 0, j = 0;
    
    printf("Enter: ");
//    scanf("%d %d", &a, &n);
    a = 2;
    n = 5;
    
    for(i=1; i<=n; i++){
        j = i;
        temp = 0;
        while(j>0){
            temp += a * pow(10, j - 1);
            j--;
        }
        sum += temp;
    }
    
    printf("sum = %d", sum);
    
    return 0;
}
