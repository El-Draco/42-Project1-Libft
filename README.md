# **Libft**

## This library includes my recoded versions of a variety of commonly used C functions that mimic the system functions behaviour. The assignemtn is paart of the 42 Coding school curriculum. It also includes some extra functions according that are useful in string manipulation. A bonus section on linked lists is also included.
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
* Prototype:
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
* Prototype:
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
* Prototype:
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
* Prototype:
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
* Prototype:
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
* Prototype:
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
* Prototype:
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
    
    Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary
---


### _**ft_putchar_fd**_
* Prototype:
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
    
    Outputs the character ’c’ to the given file
descriptor.

---


### _**ft_putstr_fd**_
* Prototype:
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
    
    Outputs the string ’s’ to the given file
descriptor.

---


### _**ft_putendl_fd**_
* Prototype:
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
    
     Outputs the string ’s’ to the given file
descriptor, followed by a newline.
---

### _**ft_putnbr_fd**_
* Prototype:
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
    
    Outputs the integer ’n’ to the given file
descriptor.
---

