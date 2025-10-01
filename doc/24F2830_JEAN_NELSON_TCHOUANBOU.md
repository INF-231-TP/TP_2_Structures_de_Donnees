# TP_2 INF231 sur les listes chaînées

Il était question ici pour nous de :

1.  Lire un élément et supprimer toutes ses occurrences dans la liste.
2.  Insérer un élément dans une liste simplement chaînée triée.
3.  Insérer un élément dans une liste doublement chaînée triée.
4.  Insérer en tête et en queue dans une liste simplement chaînée circulaire.
5.  Insérer en tête et en queue dans une liste doublement chaînée circulaire.

> Une connaissance des principes de base sur les listes chaînées est nécessaire pour réaliser ce devoir.

i) **Pour le point 1 :** il est nécessaire de savoir créer un nœud, de faire une recherche séquentielle et de savoir supprimer
un nœud de la liste sans casser la chaîne.

ii) **Pour le point 2 :** il est nécessaire de savoir créer un nœud, de faire une recherche séquentielle et d'introduire 
ce nœud à une position `x` en fonction du résultat de la recherche.

iii) **Pour le point 3 :** il est également nécessaire de savoir créer un nœud et de faire une recherche séquentielle pour 
l'insérer à une position `x`. Cependant, il faut prendre en compte le fait que l'on travaille sur une liste **doublement chaînée**, donc il faut gérer le pointeur du nœud qui pointe sur l'élément précédent.

iv) **Pour le point 4 :** ici, les notions du point `ii` sont nécessaires, mais pour les listes **simplement chaînées
circulaires**. Leur manipulation est particulière. On a l'habitude de travailler avec la tête de liste, mais ici on travaillera
avec la **queue**, car la manipulation est plus facile et évite de parcourir toute la liste. Par exemple, pour insérer en tête,
il faudra juste insérer le nœud après la queue.

v) **Pour le point 5 :** ici, les notions du point `iii` sont nécessaires, mais pour les listes **doublement chaînées
circulaires**. Comme pour le cas précédent, on travaillera avec la **queue** pour plus de facilité. Pour insérer en tête,
il faudra insérer le nœud avant la tête (qui est le suivant de la queue) et pour l'insertion en queue, il faudra insérer
avant la tête et ensuite affecter le nouvel élément comme nouvelle queue.
