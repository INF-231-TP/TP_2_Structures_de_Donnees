#ifndef FONCTION_H
#define FONCTION_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node*prev;
    struct Node*next;
} Node;



// Fonctions pour liste doublement circulaire
Node* insert_tete(Node* head, int x);
Node* insert_fin(Node* head, int x);
// Affiche une liste doublement circulaire
void printlist_double_circ(Node* head);
// Affiche une liste doublement chaînée non circulaire
void printlist_double(Node* head);
// Affiche une liste simplement circulaire
void printlist_simple_circ(Node* head);
// Affiche une liste simplement chaînée triée
void printlist_simple(Node*head);

// Fonctions pour liste simplement circulaire
Node*insert_tete_circulaire(Node*head, int x);
Node*insert_fin_circulaire(Node*head, int x);
void printlist_simple_circ(Node* head);
// Fonctions pour liste simplement chaînée triée
Node* insert_pos(Node* head, int x);
void printlist_simple(Node*head);

// Fonctions pour liste doublement chaînée triée
Node*temp_insert_tete(Node*head, int x);
Node*insert_pos_double(Node*head, int x );

// Fonctions pour liste simplement chaînée simple (insertion et suppression)
Node* insert(Node* head, int x);
Node* search(Node* head, int x);

#endif
