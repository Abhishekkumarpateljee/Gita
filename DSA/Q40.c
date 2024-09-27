#include<stdio.h>
int main(){

int n; 
printf("size :");
scanf("%d",&n);

int arr[n];
printf("arr\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}

printf("\n");
for(int i=0 ; i<n ; i++ ){

printf("%d ", arr[i]);
}


printf("\n");

int c =0;
int t =0 ;
for(int i=0 ; i<n ; i++ ){

    for(int j= i+1 ; j<n ; j++){

        if(arr[i] != arr[j]){
             
             t = arr[i] ;
             c++;

            
        }
    }
}

printf(" twice = %d",t);

    return 0;
}