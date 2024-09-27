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

int sum=0 ;
int  avg;
int c=0;


for(int i=0 ; i<n ; i++ ){

if( arr[i] %2 != 0 ){
    c++;
    sum = sum + arr[i] ;

}

}
avg =sum/c;
printf("%d",avg);



    return 0;
}