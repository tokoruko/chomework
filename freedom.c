#include <stdio.h>

int main(void)
{
    /*int count , count2 ;
    int total ;
    count = count2 = 0 ;
    for (count < 100 );
    total += count*count2;
    count = count2 ++ ;*/
    /*printf("%10d\n" , 100*100);
    printf("%10d\n" , 2);
    printf("%10d\n" , 100);
    printf("%10.3f\n" , 100.0/3 );
    int min , max ;
    int total;
    printf("最小値と最大値を : 区切りで入力してください >>\n");
    scanf("%d : %d" , &min , &max);
    total = (min+max) * (max - min +1)/2;
    printf("%d~%d's total = %d\n" , min ,max ,total);
    return 0;*/
    /*int usr_score ;
    printf("点数を入力してください\n");
    scanf("%d" , &usr_score);
    if(usr_score > 100)
    {
        printf("点数が百点より多いので修正します\n");
        usr_score = 100 ;
    }
    printf("%d点\n" , usr_score);*/
    int i ;
    int x ;

    for (i = 1; i <= 100; i++)
    {
        x += i*i;
    }
    printf("%d\n" , x);
    /*printf("%d\n" , i);*/
    return 0;
}
