#ifndef _fonction_h
#define _fonction_h
#include <stdio.h>
#include <stdlib.h>

typedef struct etudiant_heberge
{
char nom[20];
char prenom[20];
char identifiant[20];
char classe[10];
char sexe [10];
char num_telephone[20];
char nom_parent[20];
char prenom_parent[20];
char num_telephone_parent[20];
char foyer[10]; 
char niveau[1];
char num_de_la_chambre[4];
} etudiant_heberge;

etudiant_heberge eh;
int ajouter_etudiant(etudiant_heberge eh);
void modifier_etudiant(etudiant_heberge eh1);
void supprimer_etudiant(char identifiant[]);
void rechercher_etudiant(char identifiant[]);
void afficher_tout();

#endif

