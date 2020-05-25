//pull data from these libraries
#include <stdio.h>
#include <cs50.h>

//main body of the code
int main(void)
{
    //prompt user "What is your name?". turn user input into a string called name.
    string name = get_string("what is your name?\n");
    //output "Hello, ---" using name string.
    printf("Hello, %s\n", name);
}
