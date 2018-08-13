ldapsearch -LLLQ sn='*bon*' sn | grep ^sn | wc -l | sed 's/ //g'
