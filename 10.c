/*
 * 打印楼梯，同时在楼梯上方打印两个笑脸
 * 用 ASCII 1 来输出笑脸；用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数
 */

#include <stdio.h>

int main(){
    int i, j;
    printf("\1\1\n");
    
    for(i=1; i<11; i++){
        for(j=1; j<i+1; j++){
            printf("%c%c",219, 219);
        }
        printf("\n");
    }
    
    return 0;
}
