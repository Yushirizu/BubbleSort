#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[20] = {78,40,84,12,86,22,42,44,82,77,96,54,70,59,37,95,4,49,63,27};
    int passage = 0;
    int permut, i, temp;




    printf("UNSORTED TABLE\n");

    for(i = 0; i<=19;i++){
        printf("Value [%d] : %d\n",i,tab[i]);
    }

    /*We don't know the number of permutations*/

    while(permut){

        permut = 0;
        passage ++;

        /*We know we'll make 20 passes*/

        for (i=0;i<20-passage;i++){

        /*If the next value in the table is larger, we will exchange the values*/

        if(tab[i] > tab [i+1]){

            /*We're going to do a permutation so we set permutation to 1*/

            permut=1;

            /*we exchange our values*/

            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
        }
    }
}





    printf("SORT TABLE\n");

    for(i = 0; i<=19;i++){
        printf("Value  [%d] : %d\n",i,tab[i]);
    }

}
