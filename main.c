#include"fonctions.h"

int main()
{
   int choix=0;
   int poly[N]={5,4,-3,2,6,0,0,-1};
   do
    {
        choix =menu();
        switch(choix)
        {
        case 1 :
            saisiePoly(poly);
            break;
        case 2 :{
            int val;
            printf("Donner une valeur : ");
            scanf("%d",&val);
            printf("P[%d] = %d\n",val,evaluer(poly,val));
            fflush(stdin);
            getchar();
                }
            break;
        case 3 :deriver(poly);
            break;
        case 4 :
            affichePoly(poly);
            break;
        case 5 :{
                int poly2[N]={-6,4,3,3,7,2,0,-1};
                //saisiePoly(poly2);
                somme2Poly(poly, poly2);
            }
            break;
         }
         while(choix !=0);
    return 0;
    }
}



