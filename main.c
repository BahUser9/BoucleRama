#include <stdio.h>

int main(void) {

    /*int N;
    do {
        printf("Entrer un positif N : ");
        scanf("%d", &N);
    }while (N<0);

    /*
     * 1- une ou des operation a faire
     * 2- combien de fois cette ou ces operations doivent etre fait
     *
     */

    /*
     *
     un entier positif = le nombre doit etre strictement > 0 ATTEINT
     et determine si il est composite ou pas

     NB: (le nombre doit etre plus grand que 1)     ATTEINT

     (et est pas premier = cest a divre nombre des diviseurs > 2)

     */
    int nombre;

    do {
        printf("Entrer un nombre : ");
        scanf("%d", &nombre);
    }while (nombre<0);      // -infini jusqua 0

    if (nombre<=1) {
        printf("dsl ma cherie mais %d est pas composite",nombre);
    }
    int nombre_des_diviseurs = 0;
    //     (et est pas premier = cest a divre nombre des diviseurs > 2)
    /*
     * exemple 9 : 1....9
     * 9%1 == 0 ET 9%9 == 0 SI OUI alors nombre_des_diviseurs++
     * 9%2 == 0 ET 9%9 == 0 SI OUI alors nombre_des_diviseurs++
     * 9%3 == 0 ET 9%9 == 0 SI OUI alors nombre_des_diviseurs++
     * 9%4 9%5 9%6 9%7 9%8 9%9 donc commence par 1 termine par et sincremente
     * */
    for (int i = 1; i<=nombre; i++) {
        if (nombre%i == 0 && nombre%nombre == 0) {
            nombre_des_diviseurs++;
        }
    }

//git et github.com

    /*






    printf("nombre des diviseurs = %d\n", nombre_des_diviseurs);
    if (nombre_des_diviseurs>2) {
        printf("%d est composite\n", nombre);
    }
    else {
        printf("%d PAS COMPOSITE",nombre);
    }
    /**
     *EXO1:UN PROGRAMME QUI AFFICHE TOUS LES NOMBRES PREMIERS ENTRE 1 ET 100
     *
     *EXO2: UN PROGRAMME QUI DEAMANDE UN NOMBRE A LUTILISATEUR; ENSUITE LE PROGRAMME
     *AFFICHE LES NOMBRES PREMIERS COMPRIS ENTRE 1 ET LE NOMBRE ENTRER; 1...X

















    return 0;
}





