echo $FT_NBR1 + $FT_NBR2 | sed 's/mrdoc/01234/g' | tr "'\\\\\"?\!" "01234" | xargs echo "obase=13; ibase=5;" | sed 's/  //g' | tr "0123456789ABC" "gtaio luSnemf"
