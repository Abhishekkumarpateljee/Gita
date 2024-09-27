#include<stdio.h>
int main(){

int n;
printf("array size:");
scanf("%d",&n);

int arr[n];

printf("array\n");

for(int i=0 ; i<n ; i++){

    scanf("%d",&arr[i]);

}

for(int i=0 ; i<n ; i++ ){

printf(" %d ", arr[i] );

}
int k  ;
printf("index \n:");
scanf( "%d", &k );


    printf(" k th element = %d ", arr[k-1] );
 



    return 0;
}