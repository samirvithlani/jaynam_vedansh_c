#include<stdio.h>

int main(){

    int a[3][3],sum=0;

    for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){

                scanf("%d",&a[i][j]);
            }

        }

        for(int i=0;i<3;i++){

            sum =0;
            for(int j=0;j<3;j++){

                printf("\t %d",a[i][j]);
                sum = sum+a[i][j];
            }

            printf("  %d",sum);
            printf("\n");

        }

return 0;
}
