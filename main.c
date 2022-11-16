#include <stdio.h>
#include "node.h"
#include "forme_fleche.h"
#include "tree.h"

int main()
{
    //FILE *fp;
    p_nom_tree tree;
    tree=set_the_nomtree();
    char ligne[100]="stabilimetre   stabilimetre    Ver:Mas+SG.";
    char ligne2[100]={};
    char flechie[20]={};
    char gender[20]={};
    char number[20]={};
    char type[20]={};
    char base[20]={};
    char base2[20]={};


    //getWords(ligne,base,flechie,type,gender,number);
    addnom(tree,base,base2,type,ligne);
    //getFormeFlechie(ligne,flechie);
    //getFormeBase(ligne,base);
    //getType(ligne,type);
    //getGender(ligne,gender);
    //getnumber(ligne,number);

    //fp=fopen("/Users/tomheising/CLionProjects/untitled3/Dictionnaire_test.txt","r");//changer en fonction de l'emplacement de Dictionnaire_test sur votre machine
    //if (fp==NULL)
    //{
        //printf("Error fp = NULL");
        //return 0;
    //}

    //else
    //{
        //while(fgets(ligne,100,fp)!=NULL)
        //{
            //getWords(ligne,flechie,base);

        //}
    //}
}


