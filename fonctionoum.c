#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctionoum.h"


int ajouter_etudiant(etudiant_heberge eh1)
{
etudiant_heberge eh;
FILE *f;
int found=0;

f=fopen("hebergement.txt","a") ;

if(f!=NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre)!=EOF) 
{
if (strcmp(eh.identifiant ,eh1.identifiant)==0) 
{
found=1;
break;
}
}
}
if (found==0)
{
fprintf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh1.nom,eh1.prenom,eh1.identifiant,eh1.classe,eh1.sexe,eh1.num_telephone,eh1.nom_parent,eh1.prenom_parent,eh1.num_telephone_parent,eh1.foyer,eh1.niveau,eh1.num_de_la_chambre) ;
fclose(f);
return 1;
}

return 0;
}



void modifier_etudiant (etudiant_heberge eh1)
{
char identifiant[20];
etudiant_heberge eh;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("hebergement.txt","r+");
f1=fopen("hebergement1.txt","a+");
if (f!= NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre)!=EOF) 
{
if (strcmp(eh1.identifiant ,eh.identifiant)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh1.nom,eh1.prenom,eh1.identifiant,eh1.classe,eh1.sexe,eh1.num_telephone,eh1.nom_parent,eh1.prenom_parent,eh1.num_telephone_parent,eh1.foyer,eh1.niveau,eh1.num_de_la_chambre) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre) ;
}
fclose(f1);
fclose(f);
remove("hebergement.txt");
rename ("hebergement1.txt","hebergement.txt");
}
}



void supprimer_etudiant (char identifiant[])
{
char identifiant1[20];
etudiant_heberge eh;
FILE *f;
FILE *f1 ;
f1 =NULL;
f=fopen("hebergement.txt","r") ;
f1=fopen("hebergement1.txt","a");
if (f!= NULL)
{

while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre)!=EOF)
{
if (strcmp(identifiant1 ,eh.identifiant)!=0)
{


fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre) ;
}
}
}


fclose(f);
fclose(f1);
remove("hebergement.txt");
rename("hebergement1.txt","hebergement.txt");
}



void rechercher_etudiant (char identifiant[])
{
char identifiant2[20];
etudiant_heberge eh;
FILE *f ;
f = fopen("hebergement.txt", "r");
if (f!=NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre)!=EOF)
{ 	
if (strcmp(identifiant2,eh.identifiant)==0)
{
fprintf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre) ;
}
}
fclose(f);
}
}



void afficher_tout() 
{
FILE *f ;
f=fopen("hebergement.txt","a+");
if (f!=NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s\n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre)!=EOF)
{
printf("nom: %s \n prenom: %s \n identifiant: %s \n classe: %s \n sexe: %s \n numero de telephone: %s \n nom du parent: %s \n prenom du parent: %s :\n numero de telephone du parent: %s \n foyer: %s \n  niveau: %s \n numero de la chambre: %s \n",eh.nom,eh.prenom,eh.identifiant,eh.classe,eh.sexe,eh.num_telephone,eh.nom_parent,eh.prenom_parent,eh.num_telephone_parent,eh.foyer,eh.niveau,eh.num_de_la_chambre) ;
}
}
fclose(f);
}




