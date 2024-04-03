
#include <stdio.h>

//                  factorial
// int main()
// {
//     int n,i,fact=1;
//     printf("Enter a Number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact*=i;
//     }
//     printf("%d! =%d",n,fact);
// }




//                  Armstrong



// int power(int a,int b){
//     int power = 1 , i ;  
//     for ( i = 1 ; i <= b ; + + i ) {  
//         power = power * a ;  
//     }  
//     return power ; 
// }
// int main(){
    
// int num,i, originalNum,result=0, remainder,m=0;

//     printf("Enter a  integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
       
//       originalNum /= 10;
//         m++;
//     }
// originalNum = num;
//     while (originalNum != 0) {
       
//         remainder = originalNum % 10;
        
//          result += power(remainder, m);
      
        
//       originalNum /= 10;
//     }

//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);
// return 0;
// }



//                      Perfect 

int main() {
    // Write C code here
   int n,i,s=0;
   printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n)
    printf("%d is a perfect number",n);
    else
    printf("%d not perfect Number",n);
    return 0;
}


//                  Reverse
int main() {
    int n,i,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }

    
    printf("%d is reverse",sum);
    
}



