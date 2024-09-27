#include<stdio.h>
int main(){

int n; 
printf(" size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);

}
printf("\n");

for(int i=0 ; i<n ; i++ ){

    printf(" %d ", arr[i]);

}

for(int i=0 ; i<n ; i++ ){

int j =i+1 ;

for( ; j<n ; j++){

    if(arr[i] == arr[j] ){
        
        for(int k = j ; k<n-1 ; k++){

            arr[k] = arr[k+1] ;

        }
        j--;
        n--;
    }
    
}

}

printf(" \n ");
for(int i =0 ; i<n; i++){

    printf(" %d ", arr[i]);
}



 






    return 0; 
}