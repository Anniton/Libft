# Libft

Libft is a 42 project.


```ruby
My own library of useful functions in C.
```

* mem functions
  * ft_memalloc
  * ft_memdel
  * ft_memset
  * ft_memcpy
  * ft_memccpy
  * ft_memmove
  * ft_memchr
  * ft_memcmp
  * bzero
  
* str functions
  * ft_strnew
  * ft_strdel
  * ft_strclr
  * ft_striter
  * ft_striteri
  * ft_strmap
  * ft_strmapi
  * ft_strequ
  * ft_strnequ
  * ft_strsub
  * ft_strjoin
  * ft_strtrim
  * ft_strsplit
  * ft_strlen
  * ft_strdup
  * ft_strcpy
  * ft_strncpy
  * ft_strcat
  * ft_strncat
  * ft_strlcat
  * ft_strchr
  * ft_strrchr
  * ft_strstr
  * ft_strnstr
  * ft_strcmp
  * ft_strncmp
  * ft_atoi
  * ft_itoa
  * ft_isalpha
  * ft_isdigit
  * ft_isalnum
  * ft_isascii
  * ft_isprint
  * ft_toupper
  * ft_tolower
  
* Print function
  * ft_putchar
  * ft_putstr
  * ft_putendl
  * ft_putnbr
  
* Function using fd 
  * ft_putchar_fd
  * ft_putstr_fd
  * ft_putendl_fd
  * ft_putnbr_fd
  
* List function
  * ft_lstnew
  * ft_lstdelone
  * ft_lstdel
  * ft_lstadd
  * ft_lstiter
  * ft_lstmap



|   | ft_memalloc|
| :--------------- |:---------------|
| Prototype |  void * ft_memalloc(size_t size); | 
| Description  |  Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.      |
| Param. #1  | La taille de la zone de mémoire à allouer.        |
| Retour | La zone de mémoire allouée.         |
| Fonctions libc  |  malloc(3) | 
