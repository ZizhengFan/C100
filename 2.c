/**
 * 从键盘输入当月利润I，求应发放奖金总数？
 * 利润(I)低于或等于10万元时，奖金可提10%；
 * 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
 * 20万到40万之间时，高于20万元的部分，可提成5%；
 * 40万到60万之间时高于40万元的部分，可提成3%；
 * 60万到100万之间时，高于60万元的部分，可提成1.5%；
 * 高于100万元时，超过100万元的部分按1%提成。
 */
#include <stdio.h>

int main(void){
    double profit = 0.0;
    double bonus10, bonus20, bonus40, bonus60, bonus100;
    double yourBonus = 0;

    bonus10 = 100000 * 0.1;
    bonus20 = bonus10 + 200000 * 0.075;
    bonus40 = bonus20 + 200000 * 0.05;
    bonus60 = bonus40 + 400000 * 0.03;

    printf("Enter your profits here: ");
    scanf("%lf", &profit);

    if(profit<=100000){
        yourBonus = profit * 0.1;
    } else if(profit<=200000){
        yourBonus = bonus10 + (profit-100000) * 0.075;
    } else if(profit<=400000){
        yourBonus = bonus20 + (profit-200000) * 0.05;
    } else if(profit<=600000){
        yourBonus = bonus40 + (profit-400000) * 0.03;
    } else if(profit<=1000000){
        yourBonus = bonus60 + (profit-600000) * 0.015;
    } else{
        yourBonus = bonus100 + (profit-1000000) * 0.01;
    }

    printf("Your bonus will be $%.2lf!\n", yourBonus);
    
    return 0;
}
