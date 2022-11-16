//
// Created by Tom Heising on 06/11/2022.
//

#ifndef TEST_TREE_H
#define TEST_TREE_H
#include "node.h"
#include "forme_fleche.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nom_tree
{
    p_letter_node Nom_root;
}t_nom,*p_nom_tree;

/*typedef struct adv_tree
{
    int nbr_forme_flechie;
    p_letter_node Adv_root;
}t_adv;

typedef struct ver_tree
{
    int nbr_forme_flechie;
    p_letter_node Ver_root;
}t_ver;

typedef struct adj_tree
{
    int nbr_forme_flechie;
    p_letter_node Adj_root;
}t_adj;*/
p_nom_tree set_the_nomtree();
p_nom_tree addnom(p_nom_tree ,char*,char*,char*,char*);



//

#endif //TEST_TREE_H
