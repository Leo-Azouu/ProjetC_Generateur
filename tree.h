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

typedef struct adv_tree
{
    p_letter_node Adv_root;
}t_adv,*p_adv_tree;

typedef struct ver_tree
{
    p_letter_node Ver_root;
}t_ver,*p_ver_tree;

typedef struct adj_tree
{
    p_letter_node Adj_root;
}t_adj,*p_adj_tree;

p_nom_tree set_the_nomtree();
p_adj_tree set_the_adjtree();
p_ver_tree set_the_vertree();
p_adv_tree set_the_advtree();
void addword(p_nom_tree t,p_adj_tree ,p_adv_tree ,p_ver_tree ,char*ligne,char*formebase,char*formeFlechie,char*type,char*GENDER,char*NUMBER);



//

#endif //TEST_TREE_H
