# include <stdio.h>
# include <stdlib.h> 

int main(int argc, char* argv) 
{
    int num; 
    printf("Please type in a integer:\n");
    scanf("%d", &num); // & - memory address operator, scanf needs it inorder to know where to place the value from stdin (console). 
    printf("The number you have typed: %d\n", num);

    // Purges stdin, discards previous input from code above to allow us to
    // use fgets properly. 
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // searches for new-line character and stops at the end of file. 

    /*
     an array of characters, synonymous to a string of size 25 characters. 
     note; this can be done by initializing an array although use of 
     calloc gives us control of memory. 
    */
    int size = 10; 
    char* sentence = (char *) calloc(size, sizeof(char)); // use of calloc to reserve clean memory space. 
    printf("Please type in a sentence: "); 
    fgets(sentence, 25, stdin); 
    printf("%s\n", sentence); 
    free(sentence); // we signal to garbage collection to release memory to avoid leakage. 

    
    /*
     Scanning/Reading a textfile. Given the file exists and that our script has authorization to access a file. 
    */
    FILE *file_ptr; // variable meant to store location of our file. 
    char str[50]; // string buffer array in the form of a character array. 

    file_ptr = fopen("file.txt", "r"); // fopen, allows us to open a file, 'r' for reading. There are other things we can feed it to make it write or append to a file. 

    if (file_ptr == NULL) // if we can't access the file, fopen returns a value that points to NULL. So we indicate a failure.
    {
        printf("file can't be opened"); 
        return -1; 
    }
    
    // Attempting to print the contents/strings stored in the file. 
    printf("printing contents of 'file.txt'\n"); 
    while (fgets(str, 50, file_ptr) != NULL) // as long as we don't encounter the EOF character. We keep going. 
    {
        printf("%s", str); // we print the string into the console. 
    }

    fclose(file_ptr); // close the resource. 

    return 0; 
}