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

***ACÁ VA EL FLOW CHART***

[![Flow Chart](https://app.diagrams.net?lightbox=1&highlight=0000ff&nav=1&title=Untitled%20Diagram.drawio#R7V1rc5s4F%2F41nnY%2FJMP98rF24r6d2UunybS7nzwKyDZbDH4BN0l%2F%2FUogGZBkkGOE47buTGqEEPic5xydm8TEnG2e3mdgu%2F4jDWE8MbTwaWLeTAzDMF0N%2FYdbnkmL7ppVyyqLwqpNrxvuou%2BQNJILV7sohHmrY5GmcRFt241BmiQwKFptIMvSx3a3ZRq377oFK8g13AUg5lu%2FRGGxJq26ptUn%2Fgej1Zrc2rPJiQcQfF1l6S4h95sY5rL8VKc3gI5F%2BudrEKaPjSbzdmLOsjQtqm%2BbpxmMMXEp2arr5gfO7p87g0khc4HrQifw3aXuOyHwPPOKjPANxDtCi7tos43hIl%2BXV5YPXTxTQuWP0SYGCTqarotNjBp19DVYR3H4O3hOd%2Fgh8gIRhR5N0VFWEI6jhzOnJbUgfh58tCcIPojBA4yne5LO0jjN0KkkLW%2BYF1n6dc8ffN9lmhRzsIlijLvPMAtBAkgzuaOHDkEcrRL0PUA0gmi8aRhlCERRihtz9JRouClPSEoZmBXwqdFECPsephtYZM%2BoCzlrUiYTKbiiYvHYhJRPGtdNOHmkERAcr%2FaD17xEXwg7JVlrcKzN14sNiJLrQJKvHO94Kh0EVD%2FZqLLgqWR6IiI5AxBp9lfg3l7NvwbB1U34vFh%2B8MwvV47F0QOGSD%2BQwzQr1ukqTUB8W7cyMK77%2FJ6mW0K%2Bf2FRPBPygV2RtokrQUvCQYTRLIBdP4BoW8SuFSy6OtpVR%2FzzOnmTwRgU0be2ehQRnlz6MY3Qr9iLwl5xEh7bvn%2FtNz5ee8DquckYDDP3DyXF35W%2B8A1L%2FwTu7z4v%2FrVtuwi3FJLjshc%2BRcXf%2BPJrmxz90zhz80RGLg%2Be6UGCfmjjInz4T%2FNcfVl5RK8TMnUgbHmGJLbcE5F0kgh7PwmPj2Up18c7gJVe9lY4UKApzJamUKcaxL%2FqnLDRG6CpISSGzYAS7b4UAqdK%2BAEEuF4LAXunoAcC77IMPDe6bXGHvOM%2Btt2%2Bj2W3TeW%2B%2FrrGILB6gkHx6Dqc0TaL0xxi9qzx39LUxkjI0gDm6OdqV5VfVETJru4WIyxec9huI%2FdxHRXwbgtKsDwiz66N0mUUx9QCR27NrYP%2FHYVEedPZ8q7bxHY9ge2sCazCIYxC68P3P%2B%2Bf%2FrbCxedM%2B%2FjFvJm9%2F3bFM2JiODH2aB7Ql1VRUqJqwP5GyQRKLOf%2Fu7TqgLxBTcPPXTdV185BjLlaDYAesBqjPS5qbtyL4SWibNFmGOfnYPpHyMl9R05sojCsNBjMo%2B%2FgoRwKI4GIDhrXnk7sGzwWUlp5pb9qW5XjpwwMDvJcN1h5NDmW2wKOGyp8JY%2Fj9l2RRcmqVG8BRNoNC90ySzcT890EPwKDhbwIo6Q8MccdoxiKuUguy2gLllzkkuFblQMH6WYDkrAkA6KCoSFIVd%2BxO42jHavdBpE875JuvV%2B6z%2BF3Mxplbs6N%2BVyVRmk7IKbIFR9TnZjDqBNNCwKROrnPdj%2B3NvHbZqQhmD8sRcqk021qMPwDnq0BpjsiIMAjTMw5rxHezooMnZzOfuMlfJ1uHnb58XP3dG7fTvei3DijaY5jmgR0jfbqo0o2dWa234tia7Z3eXYNESfrsokF4kmkseYCFT184qpCNVbc7vapEjZGMj8kS6TeC2KTEXvtUzWnEDxQnV%2BjgRPhgYAwKz8iIGAYaGVAFo1VzkY3jaP70rOx2zre7VIKKnBzwCBvokYUOHRVgcb%2FZSKySn1gReG31YRnj2YhdoZPGxz%2FEz62vLFlaa%2FBJxjsiobXVkn4iTYbJ8y39lj2k6MJNLShyIDqjHE3TfTdQ4G0WCKYQ%2FfWe9kBoTQUzKYn0F6tN8wEz0XGq4j2liraUyFr0n4bR0XLXyF%2FB%2FJPxqS36bbobYmsEVVYFyYsbI52P2QwW03CwiHc7A9nOmJUjJOxcHiT82P185vTySOIikqRVRNLGf67INFipxH%2F3NOIwftln2EWLfEzR0v8B5P9YbdcwmzSDP6wU0zZDw%2BAx0DTzMRomHAw%2Bda056ogTuP0E9ad9fkBuTmfI2fvdqSgimhiEhlkQ0xMwqgKz8xfUZVBY7QMx%2FfcHSGswj0qbwDm60UGQbiIowQqLWo5WlKEAUeRaKiratH9S7EiJBhgSk7%2Buic5%2BVOEqq6EcZmYhc2wW3F%2BWz%2BLKTkkQy1JhurOWRiqS2arX8BQ4Yx31oKFMVwDJsAoZOpQ2HJkseWdCKXTFDmfin4Xx2kAGgEmPAPicXAKEoeUp6UByzsK%2BRps8VfqYfSal3WB81%2B7oryL2Oy8wYbnUaIvP5nqjMgJKkaFTgSra4fjCJ8ufheGe2a8mdgz9IewgzAI5KVnhyw2XHn8g3LG8%2BU4o8694yNVn2Cxy5IqSTMlft2QDteI9DVEFeWjRgLpdNysTwLlZUiDEiVUBQKxYd5ST8NGLdSSnYla8GkH3RRQ3VRGdY2j3Sud9SW4IRvHkw3jUUiqNvz2ucV9SkTK8Du2TNFvi7ypMQt62KdiKu2P7W91dzc1u6O7mhpIyprXj%2Fa9jau3LNza4B20lrtzwut3eI1xxMRt44vLviv2j6ixPC54GKel9n1eggs1aRFX1tlRU%2BXNrI3jLJSBtCdzG0%2Fv04bMU9mTIdUbxyy%2BfiBfLx52UVwsXs2yPKr5melO4HQJiy%2FUBTQNnnofcMZmn6zBbbhZ47M1ZX7mDVbebyak7o41Rl9YUnVMwsU%2BlgkMPgXRd%2BFKSVUcMGU5cID8ybdLpr7unJv8F7Na6bQJUIaLvfOdKV7qKjEBmorWOZmsQtWudaf%2BuJYqQ0n8K3%2Bk9NCJoBic17Z%2F7Zn1x%2FIOxHHGMooNTm%2F%2F9JWqxybK7c6pwm4vP9AF6d9RK1UtPllO4qCG9jbBs%2FEGFAFeX9RcPjhsjeSYc7N0ZFTZAh9BZPSXjA0rY1ab5aYzmoyJOf5rTZdahvvtulx9xDVdYobzmyX9YviQDGe3jREo9VEX8Zl8je48gzihtYGbFN9gxvu62wxRriwA3WfC6MSb7wKc272gaXZfs0ZlUMASkQ%2BsLAhkXUwBjDw7%2Bt0W2SA%2FXTClfH8nh3Vw2ihRFN3VmZgktfCUpqMo8Q8rgUrOHbDBgpo85NsJLfGmi%2FjLVb8FKHYDL4sZVfYlw1%2Fq4r9nSe1caPjLeHn4S1OjMpjwl3fe6Nfl5ZiH3y9sBCwdsPfUhtf0kYus6azbmCFuS8svxcmRbZauMrA5UfH3bqYydz3XUzUTsJkQSzLaomQdCF8Om68X5Trf%2FHWlUB0u4s9TbdydTm3RlgXj60EJYtO5vk832bJlYrZ458MTdNNpyz%2F5WMI%2BQFuvax%2FUVJxbsgWTVMLkiwXOGI3thIVwt4AyTd2xKYOyUmy1LLjWtMacaLWjpfrZN3Cw%2BeKBe7I5Q0l%2BvGHDD8OLFu0FZRtC0iurH7bP6jkNHDSRnhls2ZlBvCHq4Far1x0z0cY1Wu1Da1g6dvD4EYRRlEUYd%2FUQ1bCXa3PJLrKlRo5qyfIPmB%2FDixJHM97OQM7IFhTr1%2BWKeHqvK2KIhGAQV4R7fD5VjohWbW2ikmquNNVGIYu4%2BtrgaIM3E5uQnawm9lTD6ThDe0vM19%2F4DBQJOi9jsMobF0blhSOp9GM2J7Ok%2BXKgMFPWsVam0t2zhBPlSdu%2FOkA2w0TxqdxYYljM2sZDZZR0MZQObgrf3V9NBoq%2BTOty0WXIomuktXxsQFPZOwdYuPhjwIVPWM4yWO0WwL0%2BoJ21XKbZVzy38BUKFzlPMAlMWT%2FcUhX0c3nDR5hKrktGSMXI%2BTYOPZXmuuyOb8p26eUDrcjYXCM645fcRasECezrstV1TSJvIKqDUmeVenzs7mNWabqk3AC3uf9IXoTVuwqqna4Jkouq6Djq2voCZCCOYVzmyxBxtzCL0PPjdFf73Mf6xKA7oWtilnbC6qWbCtCkYW88VpUyMs5iVSgsjaA2eG86W2zCyqyhVpPOthhrxJF7B9bRxghzG6tnqwDTP62%2FPsYLk2hR%2BKuzjWXRaMt6XvZIa5dcpghX1T4X7eJuuwdcDmfLHdffG3ZltzjcaVw4Fh1ZRUg3Yx%2F9PaK6fu00q8aUQNNll127Y3ht59n0W111mSzoqFPUD7qR8nT8KgRFGtAQ3%2Bdg7OnAcymFpXceK1HNGzJlIUlf3qQcaSxLHV8J0nRmUx7d7UGay0623d05NT0GMM9T03B%2B98WTrWtQoy5fEAJlLDGvT82d0p1u1qcUe9Zr3VVZFkOW2H6T8ULUrA5gXVNF8XjLYe7jjKCprJ9VU5mv7E3Th6pUBwaZ7YrBfHiPxVO6j6LwnIspIFQP%2BxegmRZ89frfauKLHgMZXw73vQ6Iww5U%2FcDTzdUD9zn0XB4bPz2yv6%2BfIkHoMEvxOv66ewa26z%2FSEOIe%2FwE%3D)]

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