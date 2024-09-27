#include<stdio.h>
int main(){

int n; 
printf("array size :");
scanf("%d",&n); 

int arr[ n] ;
int multi = 1 ;


for(int i =0 ; i<n ; i++ ){
    scanf("%d",& arr[i] );
    multi = multi * arr[ i ];

}

printf("multi = %d",multi);

    return 0 ;
}