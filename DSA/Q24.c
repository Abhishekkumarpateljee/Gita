#include<stdio.h>
int main(){

int n; 
printf(" size :");
scanf("%d",&n);

int arr[n] ;
int count[n] ;

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
    count[i] = 0 ;

}
printf("\n");

for(int i=0 ; i<n ; i++ ){

    printf(" %d ", arr[i]);

}

for(int i=0 ; i<n ; i++ ){

int j =i+1 ;

for( ; j<n ; j++){

    if(arr[i] == arr[j] ){
        
        count[i]++;
        count[j] = -1 ;
    }
    
}

}

int found = 0 ;

printf(" \n ");

for(int i=0 ; i<n ; i++){

    if( count[i] > 0 ){

       printf("duplicate = %d , dtime = %d\n ", arr[i] , count[i]+1);

       found = 1 ;

    }
}


if(!found){

    printf(" not duplicate ");
}


 






    return 0; 
}