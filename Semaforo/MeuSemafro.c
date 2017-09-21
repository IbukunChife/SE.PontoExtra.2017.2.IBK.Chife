#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
 int time=1;
 char Status[10] ="Inicial";
 printf("Inicializando .... Status: %s - Time: %d s.\n\n", Status,time);
    while(1){
            if ((strcmp(Status,"Inicial")==0)||(strcmp(Status,"Vermelho")==0)){
                switch (time){
                    case 1:
                        printf("Status: Verde.\n");
                        strcpy(Status,"Verde");
                        printf("infoma o tempo para a proxima etapa.\n");
                        scanf("%d",&time);
                        printf("\n");
                        break;
                     case 2:
                        printf("Status: Verde.\n");
                        strcpy(Status,"Verde");
                        printf("infoma o tempo para a proxima etapa.\n");
                        scanf("%d",&time);
                        printf("\n");
                        break;
                    default:
                        strcpy(Status,"Inicial");
                        time=1;
                        printf("Inicializando .... Status: %s - Time: %d s.\n\n", Status,time);
                        break;
                }
            } else
                if (strcmp(Status,"Verde")==0 ){
                    switch (time){
                        case 2:
                            printf("Status: Amarelo.\n");
                            strcpy(Status,"Amarelo");
                            printf("infoma o tempo para a proxima etapa.\n");
                            scanf("%d",&time);
                            printf("\n");
                            break;
                        default:
                            strcpy(Status,"Inicial");
                            time=1;
                            printf("Inicializando .... Status: %s - Time: %d s.\n\n", Status,time);
                            break;
                        }
                }else
                     if (strcmp(Status,"Amarelo")==0){
                        switch (time){
                            case 3:
                                    printf("Status: Vermelho.\n");
                                    strcpy(Status,"Vermelho");
                                    printf("infoma o tempo para a proxima etapa.\n");
                                    scanf("%d",&time);
                                    printf("\n");
                                    break;
                            default:
                                strcpy(Status,"Inicial");
                                time=1;
                                printf("Inicializando .... Status: %s - Time: %d s.\n\n", Status,time);
                                break;
                        }
                    }else{
                            strcpy(Status,"Inicial");
                            time=1;
                            printf("Inicializando .... Status: %s - Time: %d s.\n\n", Status,time);
                    }
    }
    return 0;
}
