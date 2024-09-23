#include <stdio.h>
#include <stdbool.h> // we use boolean datatypes however we can represent true or false w/ 1s and 0s respectively

int main()
{
    /*
        Conditional Operators, relies on boolean values or other conditional expressions that result in
        True/False
        > Greater Than
        < Less Than
        >= Greater Than or Equal To
        <= Less Than or Equal To
    */

    // () applicable and can be used to group conditional expressions together
    // Note the result is the same but when would this be useful? - splitting conditions that are not seemingly related to combine into larger expressions. SEE MY PIXELPAD CODE: 
    // https://pixelpad.io/app/mwbpdcpjqgn/?edit=1
    int i = 1; 
    int j = 2; 
    int k = 3; 
    bool cond1 = i < j < k; 
    bool cond2 = (i < j) < k; 
    bool cond3 = i < (j < k); 
    printf("cond1 %d\n", cond1); 
    printf("cond2 %d\n", cond2); 
    printf("cond3 %d\n", cond2); 

    /*
        Additional Conditional Expressions that combine to make bigger expressions: 
        and => &&
        or  => ||
    */



    return 0; 
}