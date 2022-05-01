/*
 * 利用条件运算符的嵌套来完成此题：
 * 学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
 *
 * (a>b)?a:b这是条件运算符的基本例子
 */

#include <stdio.h>

int main(){
    int score;
    char grade;
    
    printf("Enter your score here: ");
    scanf("%d", &score);
    
    grade = (score < 60 ) ? 'C' : ((score < 90) ? 'B' : 'A');
    printf("%c\n", grade);
    
    return 0;
}
