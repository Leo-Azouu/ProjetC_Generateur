//
// Created by Tom Heising on 06/11/2022.
//

#ifndef TEST_NODE_H
#define TEST_NODE_H
#include <stdio.h>
#define ALPHABET_SIZE 27
typedef struct s_letter_node
{
    char letter;
    struct s_letter_node * sons[ALPHABET_SIZE];
}t_letter_node;

typedef t_letter_node* p_letter_node;

/*typedef struct nom_letter_node{
    p_letter_node N;
};*/

p_letter_node createnode(char);
p_letter_node add_node(p_letter_node, char);
void add_node_r(p_letter_node,char*);
p_letter_node define_root_node(char*formebase);



#endif //TEST_NODE_H
