#include<stdio.h>


//bubble sort
//10 20 5 3 52
//3 5 10 20 52

 int a[10],sum=0,temp;

    for(int i=0;i<4;i++)
    {

        printf("\n enter %d element",i+1);
        scanf("%d",&a[i]);
    }

    //10 20 5 75 8
    for(int i=0;i<4;i++){

    //a[i] = 0 = 10
    //a[i] = 1 = 20
        for(int j=i+1;j<4;j++){
        //a[j] = 1 = 20
        //a[j] = 2 =
            if(a[i]>a[j]){

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }

        }
    }

    for(int i=0;i<4;i++){

        printf("\n i = %d",a[i]);
    }

