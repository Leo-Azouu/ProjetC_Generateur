//
// Created by Tom Heising on 06/11/2022.
//

#ifndef TEST_FORME_FLECHE_H
#define TEST_FORME_FLECHE_H
#include <stdio.h>
#include <string.h>
#include "node.h"
typedef struct node_Nom_fle
{
    p_letter_node Nom_last_node;
    int nbr_de_from_flech;
}node_fle,*p_node_nom;
#define ALP_SIZE 26
int getIndexfromchar1(char);//première forme de getindexfromChar
int getIndexFromChar2(char);//version opti au max de getindexfromchar
void getWords(char*ligne,char*formeBase,char*formeFlechie,char*TYPE,char*GENDER,char*NUMBER);//permet de d'isoler la forme de base et la forme flechie
char* getFormeBase(char*ligne,char*formeBase);
char* getFormeFlechie(char*ligne,char*formeFlechie);
char * getType(char*ligne,char*type);
char*getGender(char*ligne,char*gender);
char*getnumber(char*ligne,char*number);
char*extraire_formebase(char* t1,char*t2);
char*copieligne(char*,char*);

int isNom(char*);
int isVer(char*ligne);
int isAdj(char*ligne);
int isAdv(char*ligne);
#endif //TEST_FORME_FLECHE_H
