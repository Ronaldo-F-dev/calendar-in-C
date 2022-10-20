#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int DD=32,MM=13,YYYY=-1,NMM,IDAY,day,flag=0,NYYYY;
    int month[11] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printf("\n Bienvenue sur mon petit projet\n stimulant un calendrier\n");
    printf("Entrer le jour \n");
    scanf("%d",&DD);
    printf("Entrer le mois \n");
    scanf("%d",&MM);
    printf("Entrer le l'annee \n");
    scanf("%d",&YYYY);
    if(DD == 32 && MM == 13 && YYYY == -1){
        printf("Entrer une date correcte \n");
    }
    if(DD<=0){
        if(MM<=0){
            printf("Aucun mois n'est negatif \n");
        }
        printf("Un jour negatif ou nul n'existe pas \n");
    }
    if(MM<=0){
        printf("Aucun mois n'est negatif \n");
    }
    if(DD>31 || MM>12 || YYYY <=0){
        if(DD>31 && MM >12){
            if(YYYY<=0){
                printf("Desoler, nous avons au plus 31 jours, 12 mois et une annee  positive\n");
            }else{
                printf("Desoler, nous avons au plus 31 jours, 12 mois \n");
            }
        }else if(DD>31 && MM <=12){
            if(YYYY <= 0){
                printf("Desoler, nous avons au plus 31 jours et une annee positive \n");
            }else{
                printf("Desoler, nous avons au plus 31 jours\n");
            }
        }else{
            if(DD<=31 && MM>12){
                if(YYYY<=0){
                    printf("Desoler, nous avons au plus 12 mois et une annee positive\n");
                }else{
                    printf("Desoler, nous avons au plus 12 mois \n");
                }
            }else{
                if(DD<=31 && MM<=12 && YYYY<=0){
                    printf("Desoler, l'annee doit etre positive \n");
                }
            }
        }
    }

    /* Maintenant vérifions les informations suivant le mois*/
    switch(MM){
    case 2:
        /* On teste si l'annee est bissextile  */
        if((YYYY % 400) == 0 || ((YYYY % 4) == 0 && (YYYY % 100) != 0)){
            if(DD > 29){
                printf("Desole, le mois de fevrier se termine par 29\n");
                 break;
            }
        }else if(DD > 28){
            printf("Desole, le mois de fevrier se termine par 28 \n");
             break;
        }


    case 4:
        /* On vérifie si le mois est Avril */
        if(DD >30){
            printf("Le mois d'Avril se termine par 30 \n");
            break;
        }

    case 6:
        /* On vérifie si le mois est Juin */
        if(DD >30){
            printf("Le mois de Juin se termine par 30 \n");
            break;
        }
    case 9:
        /* On vérifie si le mois est Septembre */
        if(DD >30){
            printf("Le mois de Septembre se termine par 30 \n");
            break;
        }
    case 11:
        /* On vérifie si le mois est Novembre */
        if(DD >30){
            printf("Le mois de Novembre se termine par 30 \n");
            break;
        }
    }
    if(MM <= 2){
        NYYYY = YYYY-1;
        NMM = 0;
    }else{
        NYYYY = YYYY;
        NMM = (4* MM + 23)/10;
    }
    //On calcule le jour
    IDAY = 365 * YYYY + DD + 31 * (MM - 1) - NMM + (NYYYY / 4) - ((3 * ((NYYYY / 100) + 1) / 4));
    day = IDAY % 7;

    //Ce 'drapeau' est utilisé pour afficher la bonne de fin après les chiffres

     if(DD != 11 && DD != 12 && DD != 13)
        flag = DD % 10;

    switch(day)
    {
        case 0:
            printf(" Nous sommes le Samedi, ");
            break;

        case 1:
            printf(" Nous sommes le dimanche, ");
            break;

        case 2:
            printf(" Nous sommes le lundi, ");
            break;

        case 3:
            printf(" Nous sommes le Mardi, ");
            break;

        case 4:
            printf(" Nous sommes le Mercredi ");
            break;

        case 5:
            printf("Nous sommes le Jeudi,");
            break;

        case 6:
            printf("Nous sommes le vendredi,");
            break;
    }
    if(flag == 1){
        printf("%d er de ",DD);
    }
    else if(flag == 2){
        printf("%d ",DD);
    }
    else if(flag == 3){
        printf("%d ",DD);
    }
    else{
        printf("%d  ",DD);
    }
    printf("%d  %d!",month[MM-1],YYYY);

    printf("\n  AWADEME RONALDO TE REMERCI  ");
    return 0;
}
