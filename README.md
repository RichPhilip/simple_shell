Shell (hsh) - README

Shell (hsh) is a simple Unix shell implementation written in C. It provides basic command execution and shell functionalities.
Compilation

To compile the shell, use the following command:

c

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Usage

After compiling the shell, you can run it by executing the hsh binary:

bash

./hsh

Once the shell is running, you can type commands and execute them. The shell supports basic shell functionalities such as executing commands, handling command line arguments, and shell built-in commands.
Features

The shell (hsh) supports the following features:

    Executing external commands by providing the command's name.
    Handling command line arguments and passing them to executed commands.
    Shell built-in commands, including exit, env, and cd.
    Redirection of standard input and output using < and > operators.
    Piping multiple commands together using the | operator.
    Handling background processes by appending & at the end of the command.
    Signal handling, including Ctrl+C to interrupt a running process.

Files

The shell consists of the following files:

    shell.h: Header file containing function prototypes and data structures used in the shell.
    main.c: Main entry point of the shell program.
    tokenizer.c: Functions for tokenizing input strings.
    executor.c: Functions for executing commands and managing processes.
    helpers.c: Helper functions used throughout the shell.
    vars.c: Functions for handling shell variables and substitutions.

Authors

The shell (hsh) is developed and maintained by [Onuoha Philip] and [Collaborator Name].
