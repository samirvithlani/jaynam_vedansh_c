#include<stdio.h>


int main(){


    int a[10],sum=0;

    for(int i=0;i<4;i++){

        printf("\n enter %d element",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++){

        //0 = 0 + 10 =sum = 10
        // 10 = 10 + 25 = 35
        sum = sum + a[i];
        printf("\n a[%d] = %d",i,a[i]);
    }
    printf("\n sum =%d",sum);







return 0;
}
