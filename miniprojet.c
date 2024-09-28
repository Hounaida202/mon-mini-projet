
/*#include <stdio.h>
#include <string.h>

#define q 500
 // je declare les variables globale je vais utiliser dans toutes les fonctions

char titre[q][50];  //un tableau de 2 dimension pour les titres de chaque livre j ajoute en stock
char auteur[q][50]; // la meme chose pour l auteur
float prix[50]; // un tableau des prix de chaque livre ajouté , qui peut accepter max 50 chiifre
int quantite[50]; // la meme chose pour les
*/

#include <stdio.h>
#include <string.h>

#define nombre 100

#define tc 50

int main(){
char titre[nombre][tc];
char auteur[nombre][tc];
float prix[nombre];
int quantite[nombre];
int cnt = 0;
char ch[50];
char mettre[50];
char p[50];
int n;
int total = 0;



    do {
        printf("\nMenu:\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite d un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("7. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &n);

        switch(n){
       case 1 :

        if (cnt < nombre) {

        printf("taper le titre du livre: ");
        getchar();
        fgets(titre[cnt], tc, stdin);
        titre[cnt][strcspn(titre[cnt], "\n")] = 0;

        printf("taper lauteur du livre: ");
        fgets(auteur[cnt], tc, stdin);
        auteur[cnt][strcspn(auteur[cnt], "\n")] = 0;

        printf("taper le prix du livre: ");
        scanf("%.2f",&prix[cnt]);

        printf("Quantite en stock: ");
        scanf("%d",&quantite[cnt]);
        cnt++;
    } else {
        printf("Le stock est plein.\n");
    }


break;




           case 2 :

        if (cnt == 0) {
        printf("y a aucun livre");
    } else {
        for (int i = 0; i < cnt; i++) {
            printf(" livre %d : titre: %s, auteur: %s, prix: %f, quantite: %d\n",i+1,
                   titre[i], auteur[i], prix[i], quantite[i]);
        }
    }
break;


                    case 3 :


    printf("taper le livre que vous voulez: ");
    fgets(ch, sizeof(ch), stdin);
                ch[strcspn(ch, "\n")] = 0;

    for (int i = 0; i < cnt; i++) {
        if (strcmp(titre[i], ch) == 0) {
            printf(" titre: %[^\n], auteur: %[^\n], prix: %f, quantite: %d\n",
                   titre[i], auteur[i], prix[i], quantite[i]);
        }
    }

    printf("il n existe pas.\n");


break;

                                 case 4 :

        printf("Entrez le titre du livre à mettre à jour: ");
    scanf("%[^\n]", mettre);
    int g;

    for (int i = 0; i < cnt; i++) {
        if (strcmp(titre[i], mettre) == 0) {
            printf("Nouveau quantite: ");
            scanf("%d", &g);
            quantite[i] = g;
        }
    }

    printf("Livre non trouvé.\n"); break;
 case 5 :

         printf("Entrez le titre du livre à supprimer: ");
    scanf(" %[^\n]", p);

    for (int i = 0; i < cnt; i++) {
        if (strcmp(titre[i], p) == 0) {
            for (int j = i; j < cnt - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
            }
            cnt--;

        }
    }

    printf("Livre non trouvé.\n");
     break;



 case 6 :



    for (int i = 0; i < cnt; i++) {
        total =total + quantite[i];
    }
    printf("nombre total de livres : %d\n", total);
break;




default :
 printf(" rien");
        }
    }
    while (n!=7);


}







































