#include<stdio.h>
int main(){

int n;
printf("ARRAYB SIZE:");
scanf("%d",&n);

int arr[n];

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    printf("%d",arr[i]);
}

    return 0;
}