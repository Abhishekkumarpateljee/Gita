#include<stdio.h>
int main(){

int n; 
printf(" size :");
scanf("%d",&n);

int arr[n];

printf("arr\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    printf("%d",arr[i]);
}

printf(" asc\n");
for(int i=0 ; i<n ; i++ ){

    for(int j=i+1 ; j<n ; j++){

      if( arr[i] > arr[j] ){
       int temp  = arr[i] ;
        arr[i]   = arr[j] ;
        arr[j]   = temp   ;
    }
    }

}
int result [n];

int start = 0 , end = n-1 ;

for(int i=0 ; i<n ; i++ ){

    if( i % 2 == 0 ){

      result[i] = arr[end--] ; 
    }

    else{

        result[i] = arr[start++];
    }
}

printf("max min form = \n");

for(int i=0 ; i<n ; i++ ){

    printf("%d",result[i]);
}




    return 0;
}