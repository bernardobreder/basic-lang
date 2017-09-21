#include <stdio.h>
#include <string.h>
#include "b_arraylist.h"
#include "b_treemap.h"
#include "lib.h"
 
#define PASSFAIL "Passed":"Failed"
#define UNTST "Untested"
 
int main(int argc, char **argv) {
    printf("[start_test]\n");
    
    // Setup.
    addRating(NULL);
    addRating("");
    addRating("*");
    addRating("**");
    addRating("***");
    addRating("*****");
    addRating("*****");
 
    // ratings.
    printf("[%s] ratings(): %s\n",
        __FILE__, (ratings() == 6? PASSFAIL));
 
    // meanRating.
    printf("[%s] meanRating(): %s\n",
        __FILE__, (strcmp(meanRating(), "**") == 0)? PASSFAIL);
 
    // clearRatings.
    clearRatings();
    printf("[%s] clearRatings(): %s\n",
        __FILE__, (ratings() == 0? PASSFAIL));
    
    b_treemap_t *tree = b_treemap_new_int(0);
    b_treemap_put_int(tree, 1, "teste1");
    b_treemap_put_int(tree, 2, "teste2");
    printf("[%s] Item 1: %s\n", __FILE__, (char*) b_treemap_get_int(tree, 1));
    printf("[%s] Item 2: %s\n", __FILE__, (char*) b_treemap_get_int(tree, 2));
 
    printf("[end_test]\n");
    return 0;
}
