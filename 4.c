/**
 * @file 4.c
 * @author ZizhengFan (zfan063@uottawa.ca)
 * @brief 输入某年某月某日，判断这一天是这一年的第几天？
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * 以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，
 * 特殊情况，闰年且输入月份大于3时需考虑多加一天。
 */

#include <stdio.h>

int main(void){
    int day, month, year, sum, leap;

    printf("\nEnter Year Month Day here: ");
    scanf("%d %d %d", &year, &month, &day);

    switch(month){
        case 1:sum=0; break;
        case 2:sum=31; break;
        case 3:sum=59; break;
        case 4:sum=90; break;
        case 5:sum=120; break;
        case 6:sum=151; break;
        case 7:sum=181; break;
        case 8:sum=212; break;
        case 9:sum=243; break;
        case 10:sum=273; break;
        case 11:sum=304; break;
        case 12:sum=334; break;
        default: {
            printf("DATA ERROR\n");
            return -1;
        }
    }
    
    sum = sum + day;

    if(year%400==0 || (year%4==0 && year%100!=0)){
        leap = 1;
    } else{
        leap = 0;
    }

    if(leap==1 && month>2){
        sum++;
    }

    printf("This is the No.%d day of this year\n", sum);

    return 0;
}
