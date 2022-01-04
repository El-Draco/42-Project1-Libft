# **Libft**

### This library includes my recoded versions of a variety of commonly used C functions that mimic the system functions behaviour. The assignment is part of the 42 Coding school curriculum. It also includes some extra functions that are useful in string manipulation and efficient memory management. A bonus section on linked lists is also included.
---

## **Compilation instructions:**

### For compiling Part 1 and Part 2 functions, run the command:
```bash
make all
```
### This will create a library "libft.a" that contains the required functions which can later be used in future projects.

### * For compiling Part 1, Part2, and the linked list functions (bonus), run the following command:
``` bash
make bonus
```
### This will generate the corresponding "libft.a" library.

To clean all object files from the directory, run:
``` bash
make clean
```
To remove all object files and the static library, run:
``` bash
make fclean
```
To delete old files and recompile, run:
``` bash
make re
```

---
## **Requirements:**


### **Part 1:**

### Re-code the following functions (replicate same behaviour as that of system functions). These function do not need any external functions. (Refer to the man pages - RTFM!)

> isalpha

> isdigit

> isalnum

> isascii

> isprint

> strlen

> memset

> bzero

> memcpy

> memmove

> strlcpy

> strlcat

> toupper

> tolower

> strchr

> strrchr

> strncmp

> memchr

> memcmp

> strnstr

> atoi

### You must also re-code the following functions, using the function “malloc”:
> calloc

> strdup
---


#
## **Part 2:**

---
### _**ft_substr**_
* **Prototype**:
``` c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

* **Parameters**:
    1. The string from which to create the substring.
    1. The start index of the substring in the string ’s’.
    1. The maximum length of the substring.
* **Return value**:

    The substring. NULL if the allocation fails.
* **External functs.**: 

    malloc
* **Description** 

    Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

---

### _**ft_strjoin**_
* **Prototype**:
``` c
char *ft_strjoin(char const *s1, char const *s2);
```

* **Parameters**:
    1. The prefix string.
    1. The suffix string.
* **Return value**:

    The new string. NULL if the allocation fails.
* **External functs.**: 

    malloc
* **Description** 

    Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

---


### _**ft_strtrim**_
* **Prototype**:
``` c
char *ft_strtrim(char const *s1, char const *set);
```

* **Parameters**:
    1. The string to be trimmed.
    1. The reference set of characters to trim.
* **Return value**:

    The trimmed string. NULL if the allocation fails.
* **External functs.**: 

    malloc
* **Description** 

     Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.

---


### _**ft_split**_
* **Prototype**:
``` c
char **ft_split(char const *s, char c);
```

* **Parameters**:
    1. The string to be split.
    1. The delimiter character.
* **Return value**:

    The array of new strings resulting from the split.
NULL if the allocation fails.
* **External functs.**: 

    malloc, free
* **Description** 

     Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.

---



### _**ft_itoa**_
* **Prototype**:
``` c
char *ft_itoa(int n);
```

* **Parameters**:
    1. The integer to convert.
* **Return value**:

    The string representing the integer. NULL if the
allocation fails.
* **External functs.**: 

    malloc
* **Description** 

    Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

---



### _**ft_strmapi**_
* **Prototype**:
``` c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

* **Parameters**:
    1. The string on which to iterate.
    1. The function to apply to each character.
* **Return value**:

    The string created from the successive applications
of ’f’. Returns NULL if the allocation fails.
* **External functs.**: 

    malloc
* **Description** 
    
    Applies the function ’f’ to each character of
the string ’s’ , and passing its index as first
argument to create a new string (with malloc(3))
resulting from successive applications of ’f’. 

---

### _**ft_striteri**_
* **Prototype**:
``` c
void ft_striteri(char *s, void (*f)(unsigned int, char*));
```

* **Parameters**:
    1. The string on which to iterate.
    1. The function to apply to each character.
* **Return value**:

    None.
* **External functs.**: 

    None.
* **Description** 
    
    Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary
---


### _**ft_putchar_fd**_
* **Prototype**:
``` c
void ft_putchar_fd(char c, int fd);
```

* **Parameters**:
    1. The character to output.
    1. The file descriptor on which to write.
* **Return value**:

    None.
* **External functs.**: 

    write
* **Description** 
    
    Outputs the character ’c’ to the given file descriptor.

---


### _**ft_putstr_fd**_
* **Prototype**:
``` c
void ft_putstr_fd(char *s, int fd);
```

* **Parameters**:
    1. The string to output.
    1. The file descriptor on which to write.

* **Return value**:

    None.
* **External functs.**: 

    write
* **Description** 
    
    Outputs the string ’s’ to the given file descriptor.

---


### _**ft_putendl_fd**_
* **Prototype**:
``` c
void ft_putendl_fd(char *s, int fd);
```

* **Parameters**:
    1. The string to output.
    1. The file descriptor on which to write.

* **Return value**:

    None.
* **External functs.**: 

    write
* **Description** 
    
     Outputs the string ’s’ to the given file descriptor, followed by a newline.
---

### _**ft_putnbr_fd**_
* **Prototype**:
``` c
void ft_putnbr_fd(int n, int fd);
```

* **Parameters**:
    1. The integer to output.
    1. The file descriptor on which to write.
* **Return value**:

    None.
* **External functs.**: 

    write
* **Description** 
    
    Outputs the integer ’n’ to the given file descriptor.
---


#
## **BONUS :**

Using Linked Lists (see struct below), implement the functions mentioned below
``` c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```
**Here is a description of the fields of the t_list struct:**
> _**content**_ : The data contained in the element. The void * allows to store any kind of data.

>_**next**_ : The next element’s address or NULL if it’s the last element.

---

### _**ft_lstnew**_
* **Prototype**:
``` c
t_list *ft_lstnew(void *content);
```

* **Parameters**:
    1. The content to create the new element with.
* **Return value**:

    The new element.
* **External functs.**: 

    malloc
* **Description** 

    Allocates (with malloc(3)) and returns a new
element. The variable ’content’ is initialized
with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.

---

### _**ft_lstadd_front**_
* **Prototype**:
``` c
void ft_lstadd_front(t_list **lst, t_list *new);
```

* **Parameters**:
    1. The address of a pointer to the first link of a list.
    1. The address of a pointer to the element to be added to the list.
* **Return value**:

    None.
* **External functs.**: 

    None.
* **Description** 

    Adds the element ’new’ at the beginning of the list.

---


### _**ft_lstsize**_
* **Prototype**:
``` c
int ft_lstsize(t_list *lst);
```

* **Parameters**:
    1. The beginning of the list.
* **Return value**:

    Length of the list.
* **External functs.**: 

    None.
* **Description** 

    Counts the number of elements in a list.

---



### _**ft_lstlast**_
* **Prototype**:
``` c
t_list *ft_lstlast(t_list *lst);
```

* **Parameters**:
    1. The beginning of the list.
* **Return value**:

    Last element of the list.
* **External functs.**: 

    None.
* **Description** 

    Returns the last element of the list.

---


### _**ft_lstadd_back**_
* **Prototype**:
``` c
void ft_lstadd_back(t_list **lst, t_list *new);
```

* **Parameters**:
    1. The address of a pointer to the first link of a list.
    1. The address of a pointer to the element to be
added to the list.
* **Return value**:

    None.
* **External functs.**: 

    None.
* **Description** 

    Adds the element ’new’ at the end of the list.

---


### _**ft_lstdelone**_
* **Prototype**:
``` c
void ft_lstdelone(t_list *lst, void (*del)(void*));
```

* **Parameters**:
    1. The element to free.
    1. The address of the function used to delete the content added to the list.
* **Return value**:

    None.
* **External functs.**: 

    free.
* **Description** 

    Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.

---


### _**ft_lstclear**_
* **Prototype**:
``` c
void ft_lstclear(t_list **lst, void (*del)(void*));
```

* **Parameters**:
    1. The address of a pointer to an element.
    1. The address of the function used to delete the content of the element.
* **Return value**:

    None.
* **External functs.**: 

    free.
* **Description** 

    Deletes and frees the given element and every
successor of that element, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to
NULL.

---


### _**ft_lstiter**_
* **Prototype**:
``` c
void ft_lstiter(t_list *lst, void (*f)(void *));
```

* **Parameters**:
    1. The adress of a pointer to an element.
    1. The adress of the function used to iterate on the list.
* **Return value**:

    None.
* **External functs.**: 

    None.
* **Description** 

    Iterates the list ’lst’ and applies the function
’f’ to the content of each element.

---

### _**ft_lstmap**_
* **Prototype**:
``` c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

* **Parameters**:
    1. The adress of a pointer to an element.
    1. The adress of the function used to iterate on the list.
    1. The adress of the function used to delete the content of an element if needed.
* **Return value**:

    The new list. NULL if the allocation fails.
* **External functs.**: 

    malloc, free.
* **Description** 

    Iterates the list ’lst’ and applies the function
’f’ to the content of each element. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of an element if needed.

---



