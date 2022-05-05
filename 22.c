/*
 * 两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
 * 已抽签决定比赛名单。有人向队员打听比赛的名单。
 * a说他不和x比，c说他不和x,z比，
 * 请编程序找出三队赛手的名单。
 */

#include <stdio.h>

int main(void){
    char a, b, c;
    
    // 三个for循环，对a b c分别赋值
    // 两个if丢弃掉a b c赋值重复的情况
    for(a='x'; a<='z'; a++){
        for(b='x'; b<='z'; b++){
            if(a != b){
                for(c='x'; c<='z'; c++){
                    if(a != c && b != c){
                        
                        // 主判断，所有的比赛判断条件都在这里
                        if(a != 'x' && c != 'x' && c != 'z'){
                            printf("a对%c\nb对%c\nc对%c\n", a, b, c);
                        }
                        
                    }
                    
                }
            }
        }
    }
    
    
    return 0;
}
