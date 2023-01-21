/* Function to create a dynamically allocated string given input allocation size and characters
*
* @author Adrian Molofsky
* @version 10/19/22
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

char *create_string(char ch, int num) {
    char *new_str = malloc(num + 1);
    for (int i = 0; i < num; i++) {
        new_str[i] = ch;
    }
    new_str[num] = '\0';
    return new_str;
}

main(int argc, char *argv[]) {
    if (argc == 2) {
    char *str = create_string(argv[1], argv[2]);
    printf("%s\n",str); 
    return 0;
    } else {
        perror("Function accepts two arguments");
    }
}
