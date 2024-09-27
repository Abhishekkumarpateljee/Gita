#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n ");

for(int i=0 ; i<n ; i++ ){

scanf("%d",& arr[i]);

}

int d ;
printf("enter your no :");
scanf("%d",&d);

for(int i=0 ; i<n ; i++ ){

    for(int j = n-d ; j<n ; j++ ){

        int temp = arr[i] ;
           arr[i]= arr[j] ;
           arr[j]= temp   ;
    }

}

for(int i=0 ; i<n ; i++ ){

    printf("%d", arr[i] );

}


    return 0 ;
}