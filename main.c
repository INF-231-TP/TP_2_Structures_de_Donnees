#include "fonction.h"

int main(){
    Node* head = NULL;
    int choix, a, r, n, i;

    do {
        printf("\n================== MENU ==================\n");
        printf("1. Suppression des occurences dans la liste (simple)\n");
        printf("2. Insertion en position (liste simple trier)\n");
        printf("3. Insertion en position (liste double trier)\n");
        printf("4. Insertion en tete (liste simplement circulaire)\n");
        printf("5. Insertion en fin (liste simplement circulaire)\n");
        printf("6. Insertion en tete (liste doublement circulaire)\n");
        printf("7. Insertion en fin (liste doublement circulaire)\n");
        printf("8\033[33mvider la liste avant tout autre operation !!!\033[0m\n"); // ceci pour ajouter la couleur Jaune au Warning
        printf("0. Quitter\n");
        printf("==========================================\n");
        printf("Votre choix : ");
        if(scanf("%d", &choix) != 1){
            printf("Entrée invalide!\n");
            break;
        }

        switch(choix){
            case 1:
                printf("Combien de nombres à insérer dans la liste simple ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert(head, a);
                }
                printf("Entrer l'élément à supprimer dans la liste : ");
                scanf("%d", &r);
                head = search(head, r);
                printlist_simple(head); // liste simplement chaînée simple
                break;

            case 2:
                printf("Combien de nombres à insérer dans la liste simplement trier ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert_pos(head, a);
                }
                printlist_simple(head); // liste simplement chaînée triée
                break;

            case 3:
                printf("Combien de nombres à insérer ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert_pos_double(head, a);
                }
                printlist_double(head); // liste doublement chaînée triée
                break;
            
            case 4:
                printf("Combien de nombres à insérer en tete dans la liste simple circulaire ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert_tete_circulaire(head, a);
                }
                printlist_simple_circ(head); // liste simplement circulaire en tête
                break;

            case 5:
                printf("Combien de nombres à insérer en fin dans la liste simple circulaire ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert_fin_circulaire(head, a);
                }
                printlist_simple_circ(head); // liste simplement circulaire en fin
                break;

            case 6:
                printf("Combien de nombres à insérer en tete dans la liste double circulaire ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert_tete(head, a);
                }
                printlist_double_circ(head); // liste doublement circulaire en tête
                break;
            
            case 7:
                printf("Combien de nombres à insérer en fin dans la liste double circulaire ? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++){
                    printf("Entrer l'entier No %d : ", i+1);
                    scanf("%d", &a);
                    head = insert_fin(head, a);
                }
                printlist_double_circ(head); // liste doublement circulaire en fin

                break;
            case 8 :
                head = NULL;                
                free(head);
            case 0:
                printf("Au revoir!\n");
                break;

            default:
                printf("Choix invalide!\n");
        }

    } while(choix != 0);

    return 0;
}
