#include<stdio.h>
int main() {

int n;
printf("array size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    printf(" %d ",arr [i]);
}

int k  ;
printf("enter your no :");
scanf("%d",&k);




for(int i=0 ; i<n-1 ; i++ ){

   if(arr[i] == k){
    arr[i] = arr[i+1] ;
   }
}

printf(" \n ");
for( int i =0 ; i<n-1 ; i++ ){

    printf(" %d ",arr[i]);

 }
 




    return 0 ;
}