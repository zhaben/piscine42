export FT_USER=$USER | groups $FT_USER | sed 's/ /,/g' | tr -d "\n"

