//
// Created by Tom Heising on 06/11/2022.
//

#include "forme_fleche.h"
int getIndexfromchar1(char c)
{
    //char *alph="abcdefghijklmnopqrstuvwxyz";
    char alph[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    for(int i=0;i<27;i++)
    {
        if(alph[i]==c)
        {

            return i;
        }

    }
    return 0;
    //Mettre l'index correspondant de a=0 jusqu'à z
    //retourner l'index du char entre 0 et 25
    // index de a = 0
    // index de z = 25
    //etc
}
int getIndexFromChar2(char c)
{
    char a='a';
    return c-a;
}
void getWords(char*ligne,char*formeBase,char*formeFlechie,char*TYPE,char*GENDER,char*NUMBER){
    char*pch=strtok(ligne,": \t");
    strcpy(formeFlechie,pch);
    pch=strtok(NULL," \t+:");
    strcpy(formeBase,pch);
    pch=strtok(NULL," : \t");
    strcpy(TYPE,pch);
    pch= strtok(NULL,"+ \t");
    strcpy(GENDER,pch);
    pch= strtok(NULL,". \t");
    strcpy(NUMBER,pch);
    printf("Forme flechie :%s\t\n",formeFlechie);
    printf("Forme de base :%s\t\n",formeBase);
    printf("Type:%s\t\n",TYPE);
    printf("Gender:%s\t\n",GENDER);
    printf("number:%s\t\n",NUMBER);
}
char* getFormeBase(char*ligne,char*formeBase)
{
    char*pch=strtok(ligne,": \t");
    pch=strtok(NULL," \t");
    strcpy(formeBase,pch);
    printf("Forme Base:%s\t\n",formeBase);
    return formeBase;
}
char* getFormeFlechie(char*ligne,char*formeFlechie)
{
    char*pch=strtok(ligne,": \t");
    strcpy(formeFlechie,pch);
    printf("Forme flechie:%s\t",formeFlechie);
    return formeFlechie;
}
char * getType(char*ligne,char*Type)
{
    char*pch=strtok(ligne,": \t");
    pch=strtok(NULL," \t");
    pch=strtok(NULL," : \t");
    strcpy(Type,pch);
    //printf("Type:%s\t",Type);
    return Type;
}
char*getGender(char*ligne,char*Gender)
{
    char*pch=strtok(ligne,": \t");
    pch=strtok(NULL," \t");
    pch=strtok(NULL,":");
    pch= strtok(NULL,"+ \t");
    strcpy(Gender,pch);
    printf("Gender:%s\t",Gender);
    return Gender;
}
char*getnumber(char*ligne,char*Number)
{
    char*pch=strtok(ligne,": \t");
    pch=strtok(NULL," \t");
    pch=strtok(NULL,":");
    pch= strtok(NULL,"+");
    pch=strtok(NULL," \t\n");
    strcpy(Number,pch);
    printf("Number:%s\t\n",Number);
    return Number;
}

int isNom(char*type)
{
    if(strcmp(type,"Nom")==0)
    {
        printf("C'est un nom");
        return 0;
    }
    else
    {
        return 1;
    }
    // return 0 si c'est un nom
    // else return 1
    //utiliser la fonction getType en paramètre dans le main
}


int isAdj(char*type)
{

    if(strcmp(type,"Adj")==0)
    {
        printf("C'est un adjectif");
        return 0;
    }
    else
    {
        return 1;
    }
}


int isAdv(char*type)
{

    if(strcmp(type,"Adv")==0)
    {
        printf("C'est un adverbe");
        return 0;
    }
    else
    {
        return 1;
    }
}
int isVer(char*type)
{

    if(strcmp(type,"Ver")!=0)
    {
        printf("C'est un verbe");
        return 1;
    }
    else
    {
        return 0;
    }
}
char* extraire_formebase(char* t1,char*t2)
{
    for(int i=0;i<strlen(t1);i++)
    {
        t2[i]=t1[i+1];
    }
    return t2;
}
/*char*copieligne(char*ligne1,char*ligne2)
{
    for(int i=0;i<strlen(ligne1);i++)
    {
        ligne2[i]=ligne1[i];
    }
    return ligne2;
}*/


//Ici auraient dû être présent les fonctions permettant de conjuguer les verbes et d'accorder les noms adj;