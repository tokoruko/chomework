#include <stdio.h>
int loop_calc(int);
int input_num(void);

int main(void){
    int loop_n ;
    loop_n = input_num();
    loop_calc(loop_n);
    return 0;
}

int input_num(void){
    int num ;
    printf("input loop num\n");
    scanf("%d" , &num);
    return num;
}

int loop_calc(int loop_num){
    int cnt ;
    int total ;
    total=0;

    for(cnt=1; cnt <= loop_num; cnt++)
    {
        total+= cnt*cnt ;
    }
    printf("%d\n" , total);
    return 0;
}