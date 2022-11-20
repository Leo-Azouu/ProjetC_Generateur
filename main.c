#include <stdio.h>
#include "node.h"
#include "forme_fleche.h"
#include "tree.h"

int main()
{
    FILE *fp;
    p_nom_tree tree;
    p_ver_tree t;
    p_adv_tree tre;
    p_adj_tree tr;
    t=set_the_vertree();
    tree=set_the_nomtree();
    tre=set_the_advtree();
    tr=set_the_adjtree();
    char ligne[100]="stabilimetre   stabilimetre    Nom:Mas+SG.";
    char ligne2[100]={};
    char flechie[20]={};
    char gender[20]={};
    char number[20]={};
    char type[20]={};
    char base[20]={};
    char base2[20]={};
    //getWords(ligne,base,flechie,type,gender,number);


    //getFormeFlechie(ligne,flechie);
    //getFormeBase(ligne,base);
    //getType(ligne,type);
    //getGender(ligne,gender);
    //getnumber(ligne,number);

    fp=fopen("/Users/tomheising/CLionProjects/untitled3/Dictionnaire_test.txt","r");//changer en fonction de l'emplacement de Dictionnaire_test sur votre machine
    if (fp==NULL)
    {
        printf("Error fp = NULL");
        return 0;
    }

    else
    {
        while(fgets(ligne,100,fp)!=NULL)
        {
            addword(tree,tr,tre,t,ligne,base,flechie,type,gender,number);

        }
    }
    return 0;
}


