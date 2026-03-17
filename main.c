/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: horrodri <horrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:58:42 by horrodri          #+#    #+#             */
/*   Updated: 2026/03/17 23:21:00 by horrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define INT_MAX 
#define INT_MIN 


/** ROADMAP // comment parking
    a. receive the list into the program
    b. validate input // error logic
    z. print logic for all commands
    0. load stacks 

    *. overflow, underflow, string format, arg separated list format, duplicates, non numbeers
    
    1. create the skeleton/structure for the stacks
    2. define the logic for the structure, articulate it (push/pop logic)
    3. implement the logic for all commands (11)
    4. sorting algorithm design & execution


    QUEST LIST
    // todo: over/underflow
    // todo: full string format "1 2 3 4"
    // todo: space separate values -- 1 2 3 4
    // todo: alphabetic chars / special / non numbers
    
    // TODO: return clean input

    // TODO: implement atoi to transform cli arguments into integers



*/

#define DEBUG_MODE 0

void argument_walker (int argc, char *argv[]);
void debugger(char *argv[]);

int main (int argc, char *argv[])
{
    argument_walker(argc, argv);
    if (DEBUG_MODE ==  1)
    {
        debugger(argv);
    }
    return 0;
}


void argument_walker (int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        int j = 0;
        while(argv[i][j] != '\0')
        {
            j++;
        }
    }
}

// DEBUGGER
#if DEBUG_MODE
void debugger(char *argv[])
{
    printf("%p\n", &argv[1]);
    int address_print = argv + 4;
    printf("%i\n", address_print);
}
#endif
