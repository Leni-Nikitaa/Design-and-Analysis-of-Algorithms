#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int x,y;
} Point;
int compare(const void*a,const void*b){
    Point*p1=(Point*)a;
    Point*p2=(Point*)b;

    if(p1->x==p2->x){
        return p1->y-p2->y;
    }
    else{
        return p1->x-p2->x;
    }
}
int orientation(Point p,Point q,Point r){
    int val=(q.y-p.y)*(r.x-q.x)-(q.x-p.x)*(r.y-q.y);
    if(val==0){
        return 0;
    }
    return(val>0)?1:2;
}
void convexHull(Point points[],int n){
    if(n<3){
        return;
    }
    int i,t=0;
    Point hull[n];
    qsort(points,n,sizeof(Point),compare);
    for(i=0;i<n;i++){
        while(t>=2&&orientation(hull[t-2],hull[t-1],points[i])!=2){
            t--;
        }
        hull[t++]=points[i];
    }
    int lowerHullSize=t;
    for(i=n-2;i>=0;i--){
        while(t>=lowerHullSize+1&&orientation(hull[t-2],hull[t-1],points[i])!=2){
            t--;
        }
        hull[t++]=points[i];
    }
    printf("Convex Hull:\n");
    for(i=0;i<t-1;i++){
        printf("(%d, %d) -> ",hull[i].x,hull[i].y);
    }
    printf("(%d, %d)\n",hull[t-1].x,hull[t - 1].y);
}
int main(){
    int n,i;
    printf("Enter the number of points: ");
    scanf("%d",&n);
    Point points[n];
    printf("Enter the points:\n");
    for(i=0;i<n;i++){
        scanf("%d %d",&points[i].x,&points[i].y);
    }
    convexHull(points,n);
    return 0;
}