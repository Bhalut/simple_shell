# 0x16. C - SIMPLE SHELL

![imagen](https://fsa.zobj.net/crop.php?r=wxnhCKygZkyFeDmb4Xzm3SaeyoOqZyiV1gE-J39wRh6QyZpqmNXNJpTMXVu9M-1ZfkBo0OhVOvh7ukLCVNAA8Co_ILHz9g3phhgtvnALpCt1KNV67Az4BHrrTlDrXy7Lyw9iJL8Wl6FsosGY)

## Description

`Simple_shell` is an sh-compatible command language interpreter that executes commands read from the standard input or from a file.


The `simple_shell` is a command that reads lines from either a file or the terminal, interprets them, and generally executes other commands. The `simple_shell` implements a language that has flow control constructs, a macro facility that provides a variety of features in addition to data storage, along with built in history and lineediting capabilities. It incorporates many features to aid interactive use and has the advantage that the interpretative language is common to both interactive and non-interactive use `(shell scripts)`. That is, commands canbe typed directly to the running shell or can be put into a file and the file can be executed directly by the shell.


## Features

- Displays a prompt and waits for user to type a command
- Can handle commands with options and arguments
- Prompt displays again each time command is executed
- Uses PATH variable to find executable command
- If executable is not found, prints an error message and displays prompt again
- Includes an exit function that exits the shell
- Includes an env built-in that prints the current environment


## Usage

- Enter custom shell by typing `"./hsh"`. You should be prompted with a `($)`
- Type a command of your liking and press `"Enter"`
- Appropriate output will appear
- Prompt reappears and awaits your next command
- Exit shell by typing `"exit"`


## Environment

The custom shell was developed and tested on `Ubuntu 14.04` LTS via Vagrant in VirtualBox.


## Compilation

All files will be compiled with the following: 
```bash
cc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Exiting commands and the shell

To exit out of a command or process the user can use `ctrl c`. `Control c` stops a process and causes it to abort. The user can also utilize the command `ctrl D` which will just exit. When the command `ctrl D` is used an exit status of 0 is given. Using `exit`, you can input its exit status or it is defaulted to thestatus of the last command executed.

## Authors

Mónica Ortíz Alvarez [GitHub](https://github.com/monicajoa)
Abdel Mejia [GitHub](https://github.com/Bhalut)