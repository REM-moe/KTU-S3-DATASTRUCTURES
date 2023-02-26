#include <stdio.h>

int main() {
    int data;
    int k = 0; int option;
    int s = 0; int stackoption;
    int q = 0; int queueoption;
    while(k ==0){
        printf("Enter 1: Stack\n 2:Queue\n 3 Exit\n");
        scanf("%d",&option);
        switch(option){
            case 1:
               while(s == 0){
                   printf("Enter 1: PUSH\n 2:POP\n 3 Exit\n");
                   scanf("%d",&stackoption);
                   switch(stackoption){
                       case 1:
                            printf("Enter data:");
                            scanf("%d",&data);
                            push(data);
                            break;
                        case 2:
                            break;
                         case 3:
                            s=1;
                            break;
                   }
               }
               break;
               case 2:
               while(q == 0){
                   printf("Enter 1: Enqueue\n 2:Dequeue\n 3 Exit\n");
                   scanf("%d",&stackoption);
                   switch(stackoption){
                       case 1:
                            printf("Enter data:");
                            scanf("%d",&data);
                            enqueue(data);
                            break;
                        break;
                        case 2:
                         break;
                         case 3:
                            q=1;
                            break;
                   }
               }
               break;
               case 3:
               k = 1;
               break;
        }
    }

    return 0;
}
