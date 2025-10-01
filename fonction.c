#include "fonction.h"

// -----------------------------------------
// Liste doublement circulaire
// -----------------------------------------
Node* insert_tete(Node* head, int x){
    Node* NewHead = (Node*)malloc(sizeof(Node));
    if(head == NULL){
        NewHead->next = NewHead;
        NewHead->prev = NewHead;
        NewHead->val = x;
        head = NewHead;
    } else {
        NewHead->val = x;
        Node* last = head->prev;
        NewHead->next = head;
        NewHead->prev = last;
        last->next = NewHead;
        head->prev = NewHead;
        head = NewHead;
    }
    return head;
}

Node* insert_fin(Node* head, int x){
    Node* Newn = (Node*)malloc(sizeof(Node));
    if(head == NULL){
        Newn->val = x;
        Newn->next = Newn;
        Newn->prev = Newn;
        head = Newn;
        return head;
    } else {
        Newn->val = x;
        Node* last = head->prev;
        last->next = Newn;
        Newn->prev = last;
        Newn->next = head;
        head->prev = Newn;
        return head;
    }
}

void printlist_double(Node* head){
    if(head == NULL){
        printf("Liste vide!\n");
        return;
    }
    Node* curent = head;
    while(curent != NULL){
        printf("%d -> ", curent->val);
        curent = curent->next;
    }
    printf("FIN\n");
}

void printlist_double_circ(Node* head){
    if(head == NULL){
        printf("Liste vide!\n");
        return;
    }
    Node* curent = head;
    do{
        printf("%d -> ", curent->val);
        curent = curent->next;
    } while(curent != head);
    printf("RETOUR\n");
}

// -----------------------------------------
// Liste simplement circulaire
// -----------------------------------------

// fonction pour afficher la liste simple circulaire

void printlist_simple_circ(Node* head) {
    if(head == NULL) {
        printf("Liste vide!\n");
        return;
    } 
    
        Node* curent = head;
        do{
            printf("%d -> ", curent->val);
            curent = curent->next;
        }while(curent != head);
        printf("RETOUR \n");
    
}


Node*insert_tete_circulaire(Node*head, int x){
    Node*Newn = (Node*)malloc(sizeof(Node));
    if(head==NULL){
        Newn->val = x;
        Newn->next = Newn;
        head = Newn;

    }
    else{
        Newn->val = x;
        Node*temp=head;
         Node*last = head;
        while(temp->next!=head){
            last=temp;
            temp=temp->next;
        }
        last=last->next;
        Newn->next = head;
        last->next=Newn;
        head=Newn;
    }
    return head;
}

Node*insert_fin_circulaire(Node*head, int x){
    Node*Newn = (Node*)malloc(sizeof(Node));
    Newn->val = x;
    Newn-> next = NULL;
    if(head== NULL){
        return insert_tete(head, x);
    }
    if (head->next == head){
        
        head->next = Newn ;
        Newn->next = head;
        
    }
    else {
        Node*temp= head  ;
        while(temp->next != head){
        
            temp = temp->next; 
        }
        temp->next = Newn;
        Newn ->next = head;
        
    }
    return head; ;

}



// -----------------------------------------
// Liste simplement chaînée triée
// -----------------------------------------
Node* insert_pos(Node* head, int x){
    Node* pos = (Node*)malloc(sizeof(Node));
    if(pos == NULL){
        printf("Erreur d'allocation\n");
        return head;
    }
    pos->val = x;
    pos->next = NULL;

    if(head == NULL || x < head->val){
        pos->next = head;
        return pos;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->val < x){
        temp = temp->next;
    }
    pos->next = temp->next;
    temp->next = pos;

    return head;
}

// fonction pour afficher la liste
void printlist_simple(Node* head) {
    if(head == NULL) {
        printf("Liste vide!\n");
    } 
    else {
        Node* curent = head;
        while(curent != NULL) {
            printf("%d -> ", curent->val);
            curent = curent->next;
        }
        printf("FIN\n");
    }
}

// -----------------------------------------
// Liste double chaînée trier
// -----------------------------------------

Node*temp_insert_tete(Node*head, int x){
    Node*Newn= (Node*) malloc(sizeof(Node));
    if(head== NULL){
        Newn->val = x;
        Newn->next = NULL;
        Newn->prev = NULL;
        head = Newn;
    }
    else{
        Newn->val= x;
        Newn->next = head;
        Newn->prev = NULL;
        head->prev = Newn;
        head = Newn ;

    }
    return head ; 
}

// fonction pour inserer a une position precise (ordre croissant)
Node*insert_pos_double(Node*head, int x ){
    if(head == NULL || x < head->val){
        return temp_insert_tete(head, x);
    }
    Node* temp = head;
    while(temp->next != NULL && temp->next->val < x){
        temp = temp->next;
    }
    Node* pos = (Node*)malloc(sizeof(Node));
    if(pos == NULL){
        printf("Erreur d'allocation\n");
        return head;
    }
    pos->val = x;
    pos->next = temp->next;
    pos->prev = temp;
    temp->next = pos;
    if(pos->next != NULL){
        pos->next->prev = pos;
    }
    return head;

}

// -----------------------------------------
// Liste simplement chaînée simple
// -----------------------------------------
Node* insert(Node* head, int x){
    Node* NewHead = (Node*)malloc(sizeof(Node));
    if(NewHead == NULL){
        printf("Erreur d'allocation\n");
        return head;
    }
    NewHead->val = x;
    NewHead->next = head;
    return NewHead;
}

Node* search(Node* head, int x){
    if(head == NULL){
        printf("Oups!!! liste vide\n");
        return head;
    }
    if(head->val == x){
        head = head->next;
        printf("Element supprimé au début\n");
        return head;
    }
    Node* temp = head;
    Node* preview = NULL;
    while(temp != NULL){
        if(temp->val == x){
            preview->next = temp->next;
            printf("Element supprimé %d\n", temp->val);
            temp = preview->next;
        } else {
            preview = temp;
            temp = temp->next;
        }
    }
    return head;
}
