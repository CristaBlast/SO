#!/usr/bin/env bash
set -u

gcc -c -Wall -Wextra *.c
gcc -o lab3 *.o -lm