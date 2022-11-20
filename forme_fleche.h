//
// Created by Tom Heising on 06/11/2022.
//

#ifndef TEST_FORME_FLECHE_H
#define TEST_FORME_FLECHE_H
#include <stdio.h>
#include <string.h>
#include "node.h"
typedef struct Present
{
    char*pps;//pps=première personne du singulier
    char*dps;//sps=deuixème personne du singulier
    char*tps;//tps=troisième personne du singulier
    char*ppp;//ppp=première personne du pluriel
    char*dpp;//dpp=deuxième personne du pluriel
    char*tpp;//tpp=troisième personne du pluriel
}t_present,*p_present;
typedef struct Imparfait
{
    char*Ipps;//pps=première personne du singulier
    char*Idps;//sps=deuixème personne du singulier
    char*Itps;//tps=troisième personne du singulier
    char*Ippp;//ppp=première personne du pluriel
    char*Idpp;//dpp=deuxième personne du pluriel
    char*Itpp;//tpp=troisième personne du pluriel
}t_imparfaitt,*p_imparfait;
typedef struct Present_du_s
{
    char*Present_du_s_pps;//pps=première personne du singulier
    char*Present_du_s_dps;//sps=deuixème personne du singulier
    char*Present_du_s_tps;//tps=troisième personne du singulier
    char*Present_du_s_ppp;//ppp=première personne du pluriel
    char*Present_du_s_dpp;//dpp=deuxième personne du pluriel
    char*Present_du_s_tpp;//tpp=troisième personne du pluriel
}t_present_du_s,*p_present_s;
typedef struct s_cell_CONJ
{
    p_present conj;
    p_imparfait con;
    p_present_s co;
    struct s_cell_CONJ * next;

}t_cell_conj,*p_cell_conj;
typedef struct S_list_ver
{
    p_cell_conj head0;
}t_list_ver;
typedef struct Ver_flech
{
    p_letter_node last_ver_node;
    t_list_ver flech;
}t_ver_flech,*p_ver_flech;

typedef struct s_cell_genre
{
     char*let;
    struct s_cell_genre * next ;
} t_cell_genre, *p_cell_genre ;
typedef struct s_std_list_genre
{
    p_cell_genre head1 ;
} t_std_list_genre ;

typedef struct s_cell_number
{
    char*lettre;
    struct s_cell_number * next ;
} t_cell_number, *p_cell_number;
typedef struct s_std_list
{
    p_cell_number head2 ;
} t_std_list_number ;

typedef struct Adj_fle
{
    p_letter_node Adj_last_node;
    t_std_list_genre genre;
    t_std_list_number number;

}t_adj_fle,*p_Adj_fle;

typedef struct Nom_fle
{
    p_letter_node Nom_last_node;
    t_std_list_genre GENRE;
    t_std_list_number NUMBER;
}nom_fle,*p_Nom_fle;



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
