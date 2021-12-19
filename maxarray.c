#include<stdio.h>

int main(){


     int a[10],max;

    for(int i=0;i<4;i++){

        printf("\n enter %d element",i+1);
        scanf("%d",&a[i]);
    }
    // 12 25 5 78 2
    // 12 -- > 25
    // 25  max ==25
    //25 = 5  max = 25
    // 25 = 78 = 78
    // 78 = 2  78

    max = a[0];


return 0;
}
