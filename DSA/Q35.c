#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n];

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}
printf("arr\n");
for(int i=0 ; i<n ; i++ ){

    printf("  %d  ", arr[i]);
}

printf("arr\n");
int i = -1;

    for (int j = 0; j < n; j++) {
        if (arr[j] > 0) {
            i++;
    
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }


for(int i=0 ; i<n ; i++ ){

    
        printf(" %d   ", arr[i]);
        
    
}



    return 0;
}