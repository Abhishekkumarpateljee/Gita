#include<stdio.h>
int main(){

int n; 
printf("size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i =0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}
int sum =0 ;
int k ;
scanf("%d",&k);

for(int i=0 ; i<n ; i++ ){

    for(int j = i+1 ; j<n ; j++){
     sum =   arr[i] + arr[j] ;

     if( sum == k) {

      printf(" index%d + index %d = %d" ,i , j , sum);
     }

    }
}



    return 0;
}