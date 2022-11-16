//
// Created by Tom Heising on 06/11/2022.
//

#include "tree.h"
p_nom_tree set_the_nomtree()
{
    p_nom_tree t=NULL;
    t=(p_nom_tree)malloc (sizeof(t_nom));

    /*char alph[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    for(int i=0;i<27;i++){
        t->Nom_root->sons[i]= createnode(alph[i]);
    }*/
    return t;
}

p_nom_tree addnom(p_nom_tree t,char*formebase,char*formebase2,char*type,char*Ligne)
{
    //extraire_formebase(formebase,formebase2);
    if (!isNom(getType(Ligne,type)))
    {
        return t;
    }
    else
    {

        t->Nom_root->sons[getIndexFromChar2(formebase[0])] = define_root_node(formebase);
        add_node_r(t->Nom_root->sons[getIndexFromChar2(formebase[0])],formebase);
        //print_tree
        return t;
    }
}
