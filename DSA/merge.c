int main(){

int n;
printf("ARRAY SIZE:");
scanf("%d",&n);

int arr[n];

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    printf("%d",arr[i]);
}

int m;
printf("ARRAYB SIZE:");
scanf("%d",&m);

int arr1[m];

printf("array\n");

for(int i=0 ; i<m ; i++ ){

    scanf("%d",&arr1[i]);
}

for(int i=0 ; i<m ; i++ ){

    printf("%d",arr1[i]);
}
int k = n+m ;
int merge[k] ;

for(int i=0 ; i<k-m ; i++){

    merge[i] = arr[i] ;
}

for(int i=n-1 ; i<k; i++){

    merge[i] = arr1[i] ;
}

printf("\n");
for(int i=0 ; i<k ; i++){

    printf("%d",merge[i]);
}

return 0;
}