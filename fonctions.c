#include"fonctions.h"

void saisiePoly(int poly[]){

    int i = 0;
    // saisie du monome
    printf("Le coeff:");
    scanf("%d", &poly[0]);

    do{
        printf("Donnez l'exoposant:");
        scanf("%d", &poly[1]);
    }
    while(poly[1]<0);

    // saisie de polynome

    do{
        i+=2;
        printf("le coeff egal à zero(0): ");
        scanf("%d", &poly[i]);
        if(poly[i]==0){
            poly[i+1] = -1;
            break;
        }

        // saisie d'exposant
    do{
        printf("exposant >0 et < 0 %d", poly[i-1]);
        scanf("%d", &poly[i+1]);
    }
    while(poly[i+1] <0 || poly[i+1] >= poly[i-1]);
    }
    while(poly[i] != 0 );

}

    //Afficher un polynome

void affichePoly(int poly[])
{
    int i=0;
    printf("P[x] = ");
    while(poly[i]!=0)
    {
        if(poly[i+1]==0)
            printf("%+d",poly[i]);
        else if(poly[i+1]==1)
            printf("%+dx",poly[i]);
        else
            printf("%+dx^%d",poly[i],poly[i+1]);
        i+=2;
    }
    printf("\n");
    fflush(stdin);
    getchar();
}

   //Evaluer un polynome

int evaluer(int poly[], int val)
{
    int res = 0;
    int i=0;
    while(poly[i]!=0)
    {
        res+=poly[i]*pow(val,poly[i+1]);
        i+=2;
    }
    return res;
}

   //Dériver un polynome

void deriver(int poly[])
{
    int i=0;
    while(poly[i]!=0)
    {
        poly[i]*=poly[i+1];
        poly[i+1]--;
        i+=2;
    }
}


int menu()
{
    int choix;

    do
    {
        system("cls");
        printf("1 : Saisir \n");
        printf("2 : Evaluer \n");
        printf("3 : Deriver \n");
        printf("4 : Afficher \n");
        printf("5 : Somme de 2 polynomes \n");
        printf("0 : Quitter \n");
        printf(" \tDonner votre choix (>= 0 et <6) -->");
        scanf("%d",&choix);
    }
    while(choix<0 || choix >5);
    return choix;

}
