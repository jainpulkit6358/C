#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        
        for(j=1;j<i;j++){
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,c;
    scanf("%d",&n);
      for (int i = 1; i<= n; i++) {
       
        for (int j = i; j>= 1; j--) {
            printf("%d", j);
        }
        for (int j = 2; j <= (n - i + 1); j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
