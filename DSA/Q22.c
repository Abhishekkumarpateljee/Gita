#include <stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d" , &n);

int arr[n];

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);

}
int c=0 , found = 0  ;
int r = 1  ;

for(int i=0  ; i<n ; i++ ){

   for(int j=i+1 ; j<n ; j++ ){

     if(arr[i] == arr[j]){

        r = arr[i] ;
        c++;
        found = 1;
        
     }

   }

   if(found)
   break;
}
if(found){

    printf(" repeat = %d , rtimes = %d ", r , c);
}


    return 0 ;
}