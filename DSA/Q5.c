#include<stdio.h>
int main(){

int n;
printf("array size :");\
scanf("%d", &n );

int arr[n];

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}



for(int i=0 ; i<n ; i++ ){

if( arr[i] %2 == 0 ){

    printf("even = %d", arr[i]);

}

}



    return 0;
}