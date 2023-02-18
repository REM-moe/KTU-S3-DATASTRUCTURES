#include <stdio.h>
struct queue{
    int val;
    int prio;
}Q[20];
int f = -1,r = -1;
int n;
void enque(int val,int prio){
    if(f==-1 && r==-1){
        f++;r++;
        Q[f].val = val;
        Q[f].prio = prio;
    }
    else if((r+1)%n==f)
        printf("full\n");
    else {
        r = (r+1)%n;
        Q[r].val = val;
        Q[r].prio = prio;
    }
}

int deque(){
    if(f==-1 && r==-1)
        printf("empty\n");
    int larg = Q[f].prio;int pos;
    for(int i=f;i<r;i++){
        if(Q[i].prio > larg){
            larg = Q[i].prio;
            pos = i;
        }
    }
    int e = Q[pos].val;
    for(int i=pos;<=r;i++){
        Q[i] = Q[(i+1)%n];
    }
    return e;
}

int main()
{
printf("Enter the size of the queue\n");
    scanf("%d",&n);
    int elem,prio;
    for(int i=0;i<n;i++){
        printf("Enter the element and priority\n");
        scanf("%d%d",&elem,&prio);
        enque(elem, prio); 
    }
    printf("dequeing elements priority wise\n");
    for(int i=0;i<n;i++)
        printf("%d\n",deque());
    return 0;
}
