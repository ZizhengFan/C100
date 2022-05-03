/*
 * 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，
 * 求它在第10次落地时，共经过多少米？第10次反弹多高？
 */

#include <stdio.h>

int main(void){
    int i;
    float sum = 100;
    float h = 100;
    
    for(i=2; i<=10; i++){
        h = h / 2;
        sum += (h * 2);
        
        if(i == 10){
            printf("the 10th height: %f\n", h / 2); //注意，是第十次落地的反弹高度！
        }
    }
    
    printf("total height = %f\n", sum);
    
    return 0;
}
