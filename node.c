//
// Created by Tom Heising on 06/11/2022.
//
#include"forme_fleche.h"
#include "node.h"
#include <stdlib.h>
p_letter_node createnode(char c)
{
    p_letter_node new;
    new=(p_letter_node)malloc(27*sizeof(t_letter_node));
    new->letter = c;
    return new;
    //initialisation d'un p_letter_node new
    //initialiser la valeur de new à c
    //return new
}
p_letter_node add_node(p_letter_node P, char c)
{
    p_letter_node n=createnode(c);
    P->sons[getIndexFromChar2(c)]=n;
    return n;
}
void add_node_r(p_letter_node root_node,char*formebase)
{
    if(formebase[0]=='\0')
    {
        printf("C'est fait");
        return;
    }
    else
    {
        char*p=formebase;
        return add_node_r((add_node(root_node,formebase[1])),++p);
    }
}
p_letter_node define_root_node(char*formebase)
{
        p_letter_node Rootnode=createnode(formebase[0]);
        return Rootnode;
}


