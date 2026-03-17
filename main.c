/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: horrodri <horrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:58:42 by horrodri          #+#    #+#             */
/*   Updated: 2026/03/17 21:40:58 by horrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define INT_MAX 
#define INT_MIN 


/** ROADMAP
    a. receive the list into the program
    b. validate input // error logic
    z. print logic for all commands
    0. load stacks 

    *. overflow, underflow, string format, arg separated list format, duplicates, non numbeers
    
    1. create the skeleton/structure for the stacks
    2. define the logic for the structure, articulate it (push/pop logic)
    3. implement the logic for all commands (11)
    4. sorting algorithm design & execution






*/

void argument_walker (argc,  argv[]);
void takeandvalidate_input (char *argv[]);
void print_stackA_array(int argc, char *stack_a[]);
void create_stacks (int argc, char *argv[]);
void debugger(void);

int main (int argc, char *argv[])
{
    create_stacks (argc, argv);
    print_stackA_array(argc, argv);

    // DEBUGGER
    debugger();
    // TODO: implement atoi to transform cli arguments into integers
    return 0;
}

void argument_walker (argc,  argv[])
{
    char *walker = &argv[0][0];
    while(*walker !=)
} 

void takeandvalidate_input (char *argv[])
{
    // todo: over/underflow
    // todo: full string format "1 2 3 4"
    // todo: space separate values -- 1 2 3 4
    // todo: alphabetic chars / special / non numbers
    
    // todo: return clean input
}

/**
 * @brief Creates and zeroes out 2 stacks using arrays that can receive all CLI arguments as input.
 * 
 * 
 */
void create_stacks (int argc, char *argv[])
{
    int stack_a[(argc-1)];
    int stack_b[(argc-1)];

    for (int i = 0; i <= (argc-1); i++)
    {
        stack_a[i] = 0;
        stack_b[i] = 0;
    }

    // THIS IS LOGIC FOR FILLING STACK A
    // for (int i = 0; i <= (argc-1); i++)
    // {
    //     stack_a[i] = argv[(i+1)];
    // }
}

void print_stackA_array(int argc, char *stack_a[])
{
    int array_index = 0;
    int temp = array_index + 1;
    
    while (array_index < (argc-1))
    {
        printf("Here's the stack's element #%i: %s\n", temp, stack_a[(array_index)+1]);
        array_index++;
        temp++;
    }
}

// DEBUGGER
#if 0
void debugger(void)
{
    int counter1 = 1;
    
    while (counter1 > argc)
    {
        stack_a[counter1] = 0;
        counter1++;
    }
        counter1 = 1;
    


    // STEP_A_END
    // this main is to test the structs im making to confirm that we start from a solid
    // base


    // DEBUG _LOGIC
     printf("TEST: %c\n", argv[1][2]);
        printf("in this program we have: %i arguments\n", argc);
        printf("here are the first two arguments: ");
    for (int i = 0; i < argc - 1; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            printf("%c", argv[i][j]);
            }
            printf(" ");
            }
            printf("\n");
            printf("node1 value is: %i\n", node1.value);
            printf("node1 points to is: %p\n", node1.ptr_next_member);
            printf("the address  of node2 is: %p\n", &node2);
            
            
        }
#endif
