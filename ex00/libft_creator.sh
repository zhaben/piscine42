gcc -c -Wall -Werror -Wextra *.c 
ar rc libft.a *.o
rm *.o
ranlib libft.a
