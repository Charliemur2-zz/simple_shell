    +------------------------------------------------------------------------------------------+
    |   .|'''.|   ||                      '||                     '||              '||  '||    |
    |   ||..  '  ..   .. .. ..   ... ...   ||    ....       ....   || ..     ....   ||   ||    |
    |    ''|||.   ||   || || ||   ||'  ||  ||  .|...||     ||. '   ||' ||  .|...||  ||   ||    |
    |  .     '||  ||   || || ||   ||    |  ||  ||          . '|..  ||  ||  ||       ||   ||    |
    |  |'....|'  .||. .|| || ||.  ||...'  .||.  '|...'     |'..|' .||. ||.  '|...' .||. .||.   |
    |                             ||                  -----                                    |
    +------------------------------------------------------------------------------------------+

# simple_shell - a simple UNIX command interpreter.

> Project made at [Holberton School](https://www.holbertonschool.com "Holberton School.") for educational purpose.

> Version: 0.4+

[![Carlos Murcia](https://img.shields.io/twitter/url?url=https%3A%2F%2Ftwitter.com%2Fcharliesoka)](https://twitter.com/charliesoka) [![Luis Miguel Vargas](https://img.shields.io/twitter/url?url=https%3A%2F%2Ftwitter.com%2Fluismvargasg1)](https://twitter.com/luismvargasg1) [![GitHub contributors](https://img.shields.io/github/contributors/luismvargasg/simple_shell)](https://github.com/contributors/luismvargasg/simple_shell) [![GitHub last commit](https://img.shields.io/github/last-commit/luismvargasg/simple_shell)](https://github/last-commit/luismvargasg/simple_shell) [![GitHub repo size](https://img.shields.io/github/repo-size/luismvargasg/simple_shell)](https:///github/repo-size/luismvargasg/simple_shell)

## Table of Contents

- [Description](#description)
- [Current Features](#current-features)
- [Respository Files Description](#repository-files-description)
- [Flow Chart](#flow-chart)
- [Usage Examples](#usage-examples)
- [Getting Started](#getting-started)
- [Prerequisits](#prerequisits)
- [Built With - Compilation](#built-with---compilation)
- [Authors](#authors)
- [License](#license)
- [Acknowledgments](#Acknowledgments)

## Description

This repository contains all the files to run a ver basic UNIX command interpreter or "shell". This shell provides a command line user interface that allows the user to send instructions to the operating system (kernel) so it can execute them.

## Current Features

* Non-interactive mode.
* Interactive mode.
* Safe exit with Ctrl+D / EOF.
* Handle Ctrl+C.
* Handle exit and exit with arguments (status number).
* Handle commands + arguments.
* List all Environment variables command `env`

## Respository Files Description

| **File** | **Description** |
|----------|-----------------|
| header.h | Header file containing all the functions prototypes and standard C libraries included |
| sh_main.c | Core of the shell - Handle all the conections. |
| sh_read_line.c | Function that reads the standard input and stores the info. |
| sh_tokens.c | Function that splits a string into tokens. |
| sh_child.c | Function that creates a child and execute the command received. |
| sh_built_in.c | Function that compares two strings and execute the built-in. |
| sh_getenv.c | Function that prints the environ. |
| sh_atoi.c | Auxiliar function to convert strings to integers. |
| sh_handle_sigint.c | Signal Handler - Interrupt the process / Ctrl+C. |
| AUTHORS | File that stores the authors who create this shell. |
| man_1_simple_shell | Manual to call inside the terminal. |
| hsh | Executable file - compiled with gcc 4.8.4. |

## Flow Chart

![Flow Chart](https://i.imgur.com/RQGZB9G.png)

## Usage Examples

Non-interactive mode
------
```
simple_shell:$ echo "/bin/ls" | ./hsh
AUTHORS   hsh                 #README.md#  sh_atoi.c      sh_child.c   sh_handle_signint.c  sh_read_line.c
header.h  man_1_simple_shell  README.md    sh_built_in.c  sh_getenv.c  sh_main.c            sh_tokens.c
simple_shell:$ echo $?
0
simple_shell:$
```

Interactive mode
------
```
simple_shell:$ ./hsh
$ /bin/ls -1
AUTHORS
header.h
hsh
man_1_simple_shell
README.md
sh_atoi.c
sh_built_in.c
sh_child.c
sh_getenv.c
sh_handle_signint.c
sh_main.c
sh_read_line.c
sh_tokens.c
$```

Ctrl+C
------
```
simple_shell:$ ./hsh
$ ^C
$ ^C
$ ^C
```

Exit + arguments
------
```
simple_shell:$ ./hsh
$ exit 98
simple_shell:$ echo $?
98
simple_shell:$
```

Crtl+D
------
```
simple_shell:$ ./hsh
$
simple_shell:$ echo $?
0
simple_shell:$
```

Environment list.
------
```
simple_shell:$ ./hsh
$ env
XDG_SESSION_ID=3
TERM=xterm-256color
SHELL=/bin/bash
SSH_CLIENT=10.0.2.2 50804 22
SSH_TTY=/dev/pts/1
USER=vagrant
..continue...
```

## Getting Started

Clone this repository to get all the files you need to run this version of the "shell" on your machine. Each part needed to make this shell works is in a single and a separete file, so you can connect and trace all the steps of the function and you can make your own changes and upgrades.

## Prerequisites

This program was made and tested using Ubuntu 14.04.3 LTS and compiled with gcc 4.8.4. We recommend you to test this shell under this conditions.

## Built With - Compilation

* Ubuntu 14.04.3 LTS Running on a Virtual Machine "Vagrant"
* gcc 4.8.4 Compiled with the flags: `-Wall -Werror -Wextra -pedantic *.c -o hsh`
* GNU Emacs 24.3.1

## Authors

* **Luis Miguel Vargas** - *Initial work* - [GitHub](https://github.com/luismvargasg)
* **Carlos Andrés Murcia** - *Initial work* - [GitHub](https://github.com/Charliemur2)

## License

Opensource project.

## Acknowledgments

* Project made at Holberton School - Colombia.