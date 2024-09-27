#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n] ;

printf("arr\n");

for(int i= 0 ; i<n ; i++ ){

scanf("%d",& arr[i]);

}

int min = arr[0] ;

for(int i= 0 ; i<n ; i++ ){

   if( arr[i] < min )

    min = arr[i] ;

}

printf("min = %d ",min );



}