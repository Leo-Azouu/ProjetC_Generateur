//
// Created by Tom Heising on 06/11/2022.
//

#include "tree.h"
/*int isNomexist(p_nom_tree t,char*word1,char*word2){
    for(int i=0;i<strlen(word1);i++)
    {

    }
    if(t->Nom_root->sons[getIndexFromChar2(word1[0])]!=NULL)
    {

    }
}*///Cette focntion aurait du vérifier si le nom existait avec un parcours récursif de chaque node des tableaux
//Je l'aurais ensuite modifier pour chaque type de mot et implémentée dans ma fonction addword.
p_nom_tree set_the_nomtree()
{
    p_nom_tree t;
    t = (p_nom_tree) malloc(sizeof(t_nom));
    t->Nom_root = createnode(';');
    return t;
}
p_adj_tree set_the_adjtree()
{
    p_adj_tree t;
    t = (p_adj_tree) malloc(sizeof(t_adj));
    t->Adj_root = createnode('.');
    return t;

}
p_ver_tree set_the_vertree()
{
    p_ver_tree t;
    t = (p_ver_tree) malloc(sizeof(t_ver));
    t->Ver_root = createnode('+');
    return t;
}
p_adv_tree set_the_advtree()
{
    p_adv_tree t;
    t = (p_adv_tree) malloc(sizeof(t_adv));
    t->Adv_root = createnode('-');
    return t;
}
void addword(p_nom_tree t,p_adj_tree tr,p_adv_tree tre,p_ver_tree tree,char*ligne,char*formebase,char*formeFlechie,char*type,char*GENDER,char*NUMBER) {
    //copieligne(Ligne1,Ligne2);
    //getFormeBase(Ligne1,formebase);
    //extraire_formebase(formebase,formebase2);
    int lenght_word;
    char *pch = strtok(ligne, ": \t");
    strcpy(formeFlechie, pch);
    pch = strtok(NULL, " \t+:");
    strcpy(formebase, pch);
    pch = strtok(NULL, " : \t");
    strcpy(type, pch);
    pch = strtok(NULL, "+ \t");
    strcpy(GENDER, pch);
    pch = strtok(NULL, ". \t");
    strcpy(NUMBER, pch);
    printf("Forme flechie :%s\t\n", formeFlechie);
    printf("Forme de base :%s\t\n", formebase);
    printf("Type:%s\t\n", type);
    printf("Gender:%s\t\n", GENDER);
    printf("number:%s\t\n", NUMBER);
    lenght_word = strlen(formebase);
    printf("taille de la forme de base=%d \n", lenght_word);
    if ((strcmp(type, "Nom")) == 0) {
        printf("C'est un nom\n");
        t->Nom_root->sons[getIndexFromChar2(formebase[0])] = define_root_node(formebase);
        add_node_r(t->Nom_root->sons[getIndexFromChar2(formebase[0])], formebase);
        printf("le nom %s a bien été ajouté\n", formebase);
        return;

    }
    else if ((strcmp(type, "Ver")) == 0) {
        printf("C'est un verbe\n");
        tree->Ver_root->sons[getIndexFromChar2(formebase[0])] = define_root_node(formebase);
        add_node_r(tree->Ver_root->sons[getIndexFromChar2(formebase[0])], formebase);
        printf("le verbe %s a bien été ajouté\n", formebase);
        return;
    }
    else if ((strcmp(type, "Adj")) == 0)
    {
        printf("C'est un adjectif\n");
        tr->Adj_root->sons[getIndexFromChar2(formebase[0])] = define_root_node(formebase);
        add_node_r(tr->Adj_root->sons[getIndexFromChar2(formebase[0])], formebase);
        printf("l'adjectif %s a bien été ajouté\n", formebase);
        return;
    }
    else if ((strcmp(type, "Adv")) == 0)
    {
        printf("C'est un adverbe\n");
        tre->Adv_root->sons[getIndexFromChar2(formebase[0])] = define_root_node(formebase);
        add_node_r(tre->Adv_root->sons[getIndexFromChar2(formebase[0])], formebase);
        printf("l'adverbe %s a bien été ajouté\n", formebase);
        return;
    } else
    {
        printf("Error");
        return;
    }

}
