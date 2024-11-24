#include<stdio.h>
void main()
{ int i,j,arr[4][2]={12,22,43,54,34,65,45,67};
    printf("Enter the number between[0-3]: ");
    scanf("%d",&i);
   printf("Enter the number between[0-1]: ");
    scanf("%d",&j);
        if(i>=0&&i<=3&&j>=0&&j<=1){
            printf("%d",arr[i][j]);
        }
        else{
            printf("you entered i and j out of the range.");
        }
        printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    }
