#!/usr/bin/env bash
set -u

cont=0
for infile in *.jpg
do
    cont=$((cont+1))
    outfile=$(printf "%s-1920x.jpg" "$infile" "$cont")
    echo 'A processar ' $count - $infile #TODO
    convert -resize 1920x "$infile" "$outfile"
done