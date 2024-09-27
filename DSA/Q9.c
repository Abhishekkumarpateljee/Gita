#include<stdio.h>
int main(){

int n;
printf("array :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i=0 ; i<n ; i++){

    scanf("%d",& arr[i] );

}
printf("array\n");

for(int i=0 ; i<n ; i++ ){
    printf(" %d ",arr[i]);
}

 
for(int i =0 ; i<n ; i++ ){

    int j= i+1 ;

    for(j ; j<n ; j++ ){

        if(arr[i] > arr[j] ){

        int temp  =  arr[i];
        arr[i]    =  arr[ j];
        arr[j]    =  temp  ;

        }
        
    }
}

printf("\n");

for(int i=0 ; i<n ; i++ ){
    printf(" %d ",arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    if( i == n-1 ){
        printf("max = %d ",arr[i]);
    }
}

    return 0;
}