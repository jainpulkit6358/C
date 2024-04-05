//*************Linear Search *******

/*   #include<stdio.h>
int main(){
    int a[50];
    int n,i,j,w;
    printf("Enter size of elements");
    for(i=0;i<50;i++){
        scanf("%d",&a[i]);
        if(a[i]==-1){
            break;
        }
    }
    n=i;
    printf("These elements are:");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",i[a]);
    }
    printf("\nWhat element do you search?");
    scanf("%d",&w);
    for(i = 0; i < n; i++){
        if(w==a[i]){
            printf("%d is index of %d \n",w,i);
        }
        break;
    }

    return 0;
}  */


/*#include<stdio.h>
int main(){
    int a[6]={7,9,18,21,32,22};
    int n=21,i,mid,s,e;
    s=0;
    e=6;                 
    while (s<=e)
    {
        mid=(s+e)/2;
        if(n==a[mid]){
            printf("Element %d is found index of %d",n,mid);
            break;
        }
        else if(n<a[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    
    
}*/

// #include<stdio.h>
// int main(){
//     int a[6]={1,2,3,5,4,6};
//     int i,mid,s=0,e=6;

//     for(i=0;i<6;i++){
//         mid=(s+e)/2;
//         if(a[mid]>a[i+1]&&a[i+1]>a[i+2]){
//             printf("%d",i+1);
//             break;
//         }
//     }
// }


/*#include<stdio.h>
int swap(int *a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main(){
    int a=30,b=20;
    swap(&a,&b);
    printf("%d,%d",a,b);
}*/

