#!/usr/bin/env bash
set -u

#Exemplo de listas:
#Um dois tres

# for a in um dois tres
# do
#     echo $a
# done

# for i in {1..10}
# do
#     echo $i
# done

for i in /usr/include/*.h
do
    echo $i
done