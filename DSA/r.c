#include<stdio.h>
int main(){

int n;
printf("ARRAYB SIZE:");
scanf("%d",&n);

int arr[n];

int sum = 0 ;

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
    sum = sum + arr[i] ;
}
int add =0 ;
for(int i=1 ; i<=n ; i++ ){

    add = add + i ;
}

for(int i=0 ; i<n ; i++ ){

    int j = i+1 ;
    for( ; j<n ; j++ ) {
        if( arr[i] > arr[j] ){
            int temp = arr[i] ;
               arr[i]= arr[j] ;
               arr[j]= temp   ;
        }
    }
}

int r;
for(int i=0 ; i<n ; i++ ){

    int j = i+1 ;
    for( ; j<n ; j++ ) {
        
        if(arr[i] == arr[j] ){
                 r = arr[i] ;
            break;
        }
    }
}

printf(" repeat = %d " ,r );

int miss =( add + r) - sum ;

printf(" m = %d ", miss );


return 0;
}