#include<stdio.h>
int main(){

int n ;
printf(" size :");
scanf("%d",&n);

int arr[n] ;
printf("arr; \n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}

printf ("\n");
for(int i=0 ; i<n ; i++ ){

    printf(" %d  ,", arr[i]);
}

printf("\n");
int maxfromright = arr[n-1] ;

printf(" leaders = %d, ", maxfromright);

for(int i = n-2 ; i>=0 ; i-- ){

    if(arr[i] > maxfromright){
        maxfromright = arr[i] ;
        printf(" %d , ",maxfromright);
    }
}




return 0;
}
