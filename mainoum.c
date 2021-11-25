#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctionoum.h"

int main()
{
    etudiant_heberge eh;
    int a;
    char identifiant[20];
    char identifiant1[20];
    char identifiant2[20];
do
{

do
{
    printf("\n tappez: \n 0: quitter \n 1: ajouter un etudiant \n 2: modifier les donnees de l'etudiant \n 3: supprimer un etudiant \n 4: chercher un etudiant \n 5: afficher tous les etudiants \n");
    scanf("%d",&a);
}
while(a<0 || a>5);

switch(a)
{
case 1:
    printf("donner le nom de l'etudiant \n");
    scanf("%s",eh.nom);
    printf("donner le prenom de l'etudiant \n");
    scanf("%s",eh.prenom);
    printf("donner l'identifiant de l'etudiant \n");
    scanf("%s",eh.identifiant);
    printf("donner la classe de l'etudiant \n");
    scanf("%s",eh.classe);
    printf("donner le sexe de l'etudiant \n");
    scanf("%s",eh.sexe);
    printf("donner le num de telephone de l'etudiant \n");
    scanf("%s",eh.num_telephone);
    printf("donner le nom du parent de l'etudiant \n");
    scanf("%s",eh.nom_parent);
    printf("donner le prenom du parent de l'etudiant \n");
    scanf("%s",eh.prenom_parent);
    printf("donner le num de telephone du parent de l'etudiant \n");
    scanf("%s",eh.num_telephone_parent);
    printf("donner le nom de foyer de l'etudiant \n");
    scanf("%s",eh.foyer);
    printf("donner le num de l'etage de l'etudiant \n");
    scanf("%s",eh.niveau);
    printf("donner le numero de la chambre de l'etudiant \n");
    scanf("%s",eh.num_de_la_chambre);
    ajouter_etudiant(eh);
    break;
case 2 :
    printf("donner l'identifiant de l'etudiant a modifier ses données \n");
    scanf("%s",identifiant);
    modifier_etudiant(eh);
    break;
case 3 :
    printf("donner l'identifiant a supprimer : \n");
    scanf("%s",identifiant1);
    supprimer_etudiant (identifiant);
    break;
case 4 :
    printf("donner l'identifiant de l'etudiant a chercher : \n");
    scanf("%s",identifiant2);
    rechercher_etudiant (identifiant);
    break;
    
case 5:
    afficher_tout();
    break;
}

}
while(a!=0);
return 0;
}


