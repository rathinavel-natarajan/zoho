//sub matrix zoho
#include <stdio.h>

int main()
{
    int i,j,a[10][10],x,y,p,q,r,s,sum=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d%d%d",&p,&q,&r,&s);
    for(i=p;i<=r;i++){
        for(j=q;j<=s;j++){
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }printf("\n");
    }
    printf("\n%d",sum);
    return 0;
}
