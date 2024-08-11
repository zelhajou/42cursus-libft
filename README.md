<div align="center">
	
![ascii-text-art](https://github.com/zelhajou/libft/assets/39954629/8271db59-ccf2-4d99-a843-cea22c51e848)

</div>

# Overview
Libft is a library of various utility functions in C, created as a project for the 42 School curriculum. The library contains custom implementations of standard C library functions, as well as additional functions that can be useful for various programming tasks.

# I. Mandatory part : 
## Part 1 - Libc functions :
The term "**libc**" is commonly used as a shorthand for the "standard C library", a library of standard functions that can be used by all C programs.

**Character-handling functions**

The character-handling functions are used to check or transform characters. They are used to determine whether a character is a letter, a digit, a space, or a punctuation mark, and to convert a letter to uppercase or lowercase.

| Function | Description |
| --- | --- |
| [ft_isalpha](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isalpha.c) | checks for an alphabetic character |
| [ft_isdigit](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isdigit.c) | checks for a digit (0 through 9) |
| [ft_isalnum](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isalnum.c) | checks for an alphanumeric character; it is equivalent to (ft_isalpha(c) || ft_isdigit(c)) |
| [ft_isascii](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isascii.c) | checks whether c is a 7-bit unsigned char value that fits into the ASCII character set |
| [ft_isprint](https://github.com/zakelhajoui/libft/blob/main/libft/ft_isprint.c) | checks for any printable character including space |
| [ft_tolower](https://github.com/zakelhajoui/libft/blob/main/libft/ft_tolower.c) | converts the letter c to lower case, if possible |
| [ft_toupper](https://github.com/zakelhajoui/libft/blob/main/libft/ft_toupper.c) | converts the letter c to upper case, if possible |

In the C programming language, the functions in the character-handling library are used to check or transform characters. These functions are used to determine whether a character is a letter, a digit, a space, or a punctuation mark, and to convert a letter to uppercase or lowercase.

```ctype.h``` : This header file is used to perform operations on characters.

Each functions is receives a character represented as an int, or EOF as an argument. Characters are often manipulated as integers.
EOF normally has the value –1 and that some hardware architectures do not allow negative values to be stored in char variables. Therefore, the character-handling functions manipulate characters as integers.


**String-handling functions** :

The string-handling functions are used to manipulate strings. They are used to copy strings, concatenate strings, compare strings, and search for substrings in strings.

| Function | Description |
| --- | --- |
| [ft_strlen](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlen.c) | calculates the length of a string |
| [ft_strchr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strchr.c) | returns a pointer to the first occurrence of the character c in the string s |
| [ft_strrchr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strrchr.c) | returns a pointer to the last occurrence of the character c in the string s |
| [ft_strnstr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strnstr.c) | finds the first occurrence of the substring needle in the string haystack, where not more than len characters are searched |
| [ft_strncmp](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strncmp.c) | compares the two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2 |
| [ft_strlcpy](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlcpy.c) | copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result |
| [ft_strlcat](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strlcat.c) | appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result |


In the C programming language, the functions in the string-handling library are used to manipulate strings. These functions are used to copy strings, concatenate strings, compare strings, and search for substrings in strings.

```string.h``` : This header file is used to perform operations on strings.

There are five types of string-handling functions:

1. the `str` functions manipulate sequences of characters with a **null character** at the end.
2. the `strn` functions manipulate sequences of characters with a **specified length**.
3. the `strl` functions manipulate sequences of characters with a **specified length** and a **null character** at the end.
4. the `strr` functions manipulate sequences of characters with a **null character** at the end, starting from the **right**.
5. the `mem` functions manipulate sequences of characters without a **null character** at the end.

**Memory functions** :

The memory functions are used to manipulate memory. They are used to copy memory, compare memory, and search for memory.

| Function | Description |
| --- | --- |
| [ft_bzero](https://github.com/zakelhajoui/libft/blob/main/libft/ft_bzero.c) | erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area |
| [ft_memcmp](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memcmp.c) | compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2 |
| [ft_memchr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memchr.c) | scans the initial n bytes of the memory area pointed to by s for the first instance of c |
| [ft_memset](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memset.c) | sets the first len bytes of the memory area pointed to by s to the value specified by c |
| [ft_memcpy](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memcpy.c) | copies n bytes from memory area src to memory area dest |
| [ft_memmove](https://github.com/zakelhajoui/libft/blob/main/libft/ft_memmove.c) | copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner |

In the C programming language, the functions in the memory-handling library are used to manipulate memory. These functions are used to copy memory, compare memory, and search for memory.

```string.h``` : This header file is used to perform operations on strings.
```memory.h``` : This header file is used to perform operations on memory.

There are three types of memory-handling functions:

1. the `mem` functions manipulate sequences of characters without a **null character** at the end.
2. the `str` functions manipulate sequences of characters with a **null character** at the end.
3. the `strn` functions manipulate sequences of characters with a **specified length**.



**Type conversion & memory allocation** :

The type conversion and memory allocation functions are used to convert data types and allocate memory.

| Function | Description |
| --- | --- |
| [ft_atoi](https://github.com/zakelhajoui/libft/blob/main/libft/ft_atoi.c) | converts a string to an integer |
| [ft_calloc](https://github.com/zakelhajoui/libft/blob/main/libft/ft_calloc.c) | allocates the space for elements of an array. Initializes the elements to zero and returns a pointer to the memory |
| [ft_strdup](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strdup.c) | returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc |

In the C programming language, the functions in the type conversion and memory allocation library are used to convert data types and allocate memory.

```stdlib.h``` : This header file is used to perform operations on memory.


## Part 2 - Additional functions :

The additional functions are used to perform various tasks, such as allocating and returning a substring from a string, joining two strings together, trimming a string, splitting a string, converting an integer to a string, and applying a function to each character in a string.

| Additional functions | DESCRIPTION |
| ------------------- | ------------------- |
| [ft_substr](https://github.com/zakelhajoui/libft/blob/main/libft/ft_substr.c)      | Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
| [ft_strjoin](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strjoin.c)    | Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| [ft_strtrim](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strtrim.c)    | Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| [ft_split](https://github.com/zakelhajoui/libft/blob/main/libft/ft_split.c)        | Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. |
| [ft_itoa](https://github.com/zakelhajoui/libft/blob/main/libft/ft_itoa.c)          | Allocates and returns a string representing the integer received as an argument. |
| [ft_strmapi](https://github.com/zakelhajoui/libft/blob/main/libft/ft_strmapi.c)    | Applies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’. |
| [ft_striteri](https://github.com/zakelhajoui/libft/blob/main/libft/ft_striteri.c)  | Applies the function ’f’ to each character of the string passed as argument, and passing its index as first argument. |
| [ft_putchar_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putchar_fd.c)   | Outputs the character ’c’ to the given file descriptor. |
| [ft_putstr_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putstr_fd.c)   | Outputs the string ’s’ to the given file descriptor. |
| [ft_putendl_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putendl_fd.c)  | Outputs the string ’s’ to the given file descriptor, followed by a newline. |
| [ft_putnbr_fd](https://github.com/zakelhajoui/libft/blob/main/libft/ft_putnbr_fd.c)    | Outputs the integer ’n’ to the given file descriptor. |


# II - Bonus part

The bonus part of the project consists of implementing additional functions that are not part of the standard C library. These functions are not mandatory, but they can be useful for various programming tasks.

| Bonus functions | DESCRIPTION |
| ------------------- | ------------------- |
| [ft_lstnew](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstnew.c) | Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |
| [ft_lstadd_front](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstadd_front.c)    | Adds the element ’new’ at the beginning of the list. |
| [ft_lstsize](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstsize.c)   | Counts the number of elements in a list. |
| [ft_lstlast](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstlast.c)        | Returns the last element of the list. |
| [ft_lstadd_back](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstadd_back.c) | Adds the element ’new’ at the end of the list. |
| [ft_lstdelone](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstdelone.c)    | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. |
| [ft_lstclear](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstclear.c)  | Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list must be set to NULL. |
| [ft_lstiter](https://github.com/zakelhajoui/libft/blob/main/libft/ft_lstiter.c)   | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |


The bonus part of the project consists of implementing additional functions that are not part of the standard C library. These functions are not mandatory, but they can be useful for various programming tasks.

```list.h``` : This header file is used to perform operations on lists.

Lists are a type of data structure that can be used to store a collection of elements. Each element in a list is called a node, and each node contains a value and a pointer to the next node in the list. Lists can be used to store data in a specific order, and they can be used to perform various operations on the data, such as adding, removing, and searching for elements.


# III - How to use the library

To use the library, you need to compile the source files into a library file. You can do this by running the following commands:

```bash
make
```

This will compile the source files and create a library file called `libft.a`. You can then link this library file to your C programs by adding the following flag to the compiler command:

```bash
gcc -o my_program my_program.c -L. -lft
```

This will link the library file to your program and allow you to use the functions in the library.


# IV - Resources

- [Makefile](https://github.com/n1kito/Makefile)

# V - Explaining the theory behind the project 

## **Introduction to Computer Science**

### **What is a computer?**

A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. These programs enable computers to perform a wide range of tasks.

### **What is Computer Science?**

Computer science is the study of computers and computing concepts. It includes the study of algorithms, data structures, programming languages, computer architecture, and software engineering.

### **What is a program?**

A program is a set of instructions that tell a computer how to perform a specific task. Programs are written in programming languages, which are designed to be easy for humans to read and write.

### **What is an algorithm?**

An algorithm is a step-by-step procedure for solving a problem. It is a sequence of well-defined instructions that can be executed by a computer to perform a specific task.

### **What is a data structure?**

A data structure is a way of organizing and storing data in a computer so that it can be accessed and modified efficiently. Common data structures include arrays, linked lists, stacks, queues, trees, and graphs.

### **What is a programming language?**

A programming language is a formal language that specifies a set of instructions that can be used to produce various kinds of output. Programming languages are used to write programs that control the behavior of a computer.

### **What is computer architecture?**

Computer architecture is the design of computer systems. It includes the design of the hardware components of a computer, such as the central processing unit (CPU), memory, and input/output devices.

## **Computer Architecture:** 

The term computer architecture is used to describe the design of a computer system. It includes the design of the hardware components of a computer, such as the central processing unit (CPU), memory, and input/output devices.

- Is how processor is designed to perform tasks and different architectures are good at different tasks.

- **Von Neumann Architecture** is the basic design of a computer system. It is named after the Hungarian mathematician John Von Neumann, who first described it in 1945.
  
![Von-Neumann-Architecture](https://github.com/user-attachments/assets/782a9de3-c595-41ef-a494-4845c54a9882)

## Computer Memory

- **Memory** is used to store data and instructions that are currently being used by the CPU. There are two main types of computer memory: primary storage and secondary storage.

- **Primary storage** is used to store data and instructions that are currently being used by the CPU. It is volatile, meaning that it loses its contents when the power is turned off. Examples of primary storage include RAM and ROM.

- **Secondary storage** is used to store data and programs that are not currently being used by the CPU. It is non-volatile, meaning that it retains its contents when the power is turned off. Examples of secondary storage include hard drives, solid-state drives, and optical discs.

### **Primary Storage :**

Primary storage is used to store data and instructions that are currently being used by the CPU. It is volatile, meaning that it loses its contents when the power is turned off. Examples of primary storage include RAM and ROM.

### **RAM :**

**Random Access Memory** is a type of computer memory that can be accessed randomly. It is used to store data and machine code currently being used by the CPU. It is volatile, meaning that it loses its contents when the power is turned off.

When a program is loaded, it is copied from **secondary storage**, Such as a hard-disk. Any data is associated with the program will also be stored in **RAM** so that the **CPU** can access both the data and instructions

### **ROM :**

**Read-Only Memory** is a type of computer memory that can only be read, not written to. It is used to store the firmware of a computer system, such as the BIOS. It is non-volatile, meaning that it retains its contents when the power is turned off.

### **Secondary Storage :**

**Secondary storage** is used to store data and programs that are not currently being used by the CPU. It is non-volatile, meaning that it retains its contents when the power is turned off. Examples of secondary storage include hard drives, solid-state drives, and optical discs.

### **CPU :**

The **Central Processing Unit** is the main component of a computer system. It is responsible for executing instructions and performing calculations. The CPU consists of three main components: the control unit, the arithmetic logic unit, and the registers.

- **Control Unit** : The control unit is responsible for fetching instructions from memory, decoding them, and executing them.

- **Arithmetic Logic Unit** : The arithmetic logic unit is responsible for performing arithmetic and logical operations on data.

- **Registers** : Registers are small, high-speed storage locations in the CPU that are used to store data temporarily during processing.


## Data Storage

Data is stored in a computer using electronic circuits. These circuits are made up of tiny transistors that can be in one of two states: on or off. Each switch can be represented by the number 1 or 0. A computer uses combinations of 1s and 0s to represent data and instructions.

### **Binary Number System :**

The binary number system is a base-2 number system that uses only two digits: 0 and 1. It is used by computers to represent data and instructions. Each digit in a binary number is called a bit, and a group of 8 bits is called a byte.

- **Bit** : A bit is the smallest unit of data in a computer. It can have one of two values: 0 or 1.
- **Byte** : A byte is a group of 8 bits. It is the basic unit of storage in a computer.


![bytes-not-bits](https://github.com/user-attachments/assets/3a58d4d1-d5b1-4ead-8a70-0107b8948f91)

![bytes](https://github.com/user-attachments/assets/e2e83ed6-7f40-4dfa-9f33-755a030f45a8)

![many-meanings](https://github.com/user-attachments/assets/05a48a7a-2c20-4c26-8b93-4256c4c2f115)

### **Data Types :**

Data types are used to represent different types of data in a computer. Each data type has a specific size and range of values that it can represent. Common data types include integers, floating-point numbers, characters, and strings.

- **Integers** : Integers are whole numbers that can be positive, negative, or zero. They are commonly stored using a word of memory, which is 4 bytes or 32 bits.
- **Floating-Point Numbers** : Floating-point numbers are numbers that have a decimal point. They are commonly stored using a word of memory, which is 4 bytes or 32 bits.
- **Characters** : Characters are single letters, digits, or symbols. They are commonly stored using a single byte of memory, which is 8 bits.
- **Strings** : Strings are sequences of characters. They are commonly stored using a word of memory, which is 4 bytes or 32 bits.


### **Integers :**

Integers are whole numbers that can be positive, negative, or zero. They are commonly stored using a word of memory, which is 4 bytes or 32 bits. Integers can be represented using different number bases, such as binary, octal, decimal, and hexadecimal.

- **Binary** : Binary is a base-2 number system that uses only two digits: 0 and 1.
- **Octal** : Octal is a base-8 number system that uses the digits 0 through 7.
- **Decimal** : Decimal is a base-10 number system that uses the digits 0 through 9.
- **Hexadecimal** : Hexadecimal is a base-16 number system that uses the digits 0 through 9 and the letters A through F.

![integers](https://github.com/user-attachments/assets/af62643e-0fa1-42a6-bbe6-1dfd1844a571)

![bases](https://github.com/user-attachments/assets/ddd65123-65bc-4489-b364-5578b1e16969)

### **Endianness :**

The endianness of a computer system refers to the order in which bytes are stored in memory. There are two common types of endianness: big-endian and little-endian.

![little-big-endian](https://github.com/user-attachments/assets/2499a68c-bd14-4e6a-a522-4a269b3900db)


### **Signed and Unsigned Integers :**

Signed integers can represent both positive and negative numbers, while unsigned integers can only represent positive numbers. The most significant bit of a signed integer is used to represent the sign of the number: 0 for positive and 1 for negative.

- **Signed Integers** : Signed integers can represent both positive and negative numbers. The most significant bit of a signed integer is used to represent the sign of the number: 0 for positive and 1 for negative.
- **Unsigned Integers** : Unsigned integers can only represent positive numbers. They do not have a sign bit, so they can represent larger positive numbers than signed integers.

![signed-integers](https://github.com/user-attachments/assets/9321499a-f97e-46ca-bffe-ca53af9497fa)

### **Floating-Point Numbers :**

Floating-point numbers are numbers that have a decimal point. They are commonly stored using a word of memory, which is 4 bytes or 32 bits. Floating-point numbers are represented using the IEEE 754 floating-point standard, which defines how floating-point numbers are stored in memory.

- **IEEE 754** : The IEEE 754 floating-point standard defines how floating-point numbers are stored in memory. It specifies the format of floating-point numbers, including the sign bit, exponent, and mantissa.


### Hexadecimal

Hexadecimal is a base-16 number system that uses the digits 0 through 9 and the letters A through F. It is commonly used in computing to represent binary numbers in a more compact and readable form.

![hexadecimal](https://github.com/user-attachments/assets/2c517535-2ecc-460d-bfcc-0526cf4c3d6d)


### Bitwise Operations

Bitwise operations are operations that are performed on individual bits of a number. They are commonly used in computer programming to manipulate binary data. Common bitwise operations include AND, OR, XOR, and NOT.

![bitwise-operations](https://github.com/user-attachments/assets/4b96b58a-9dcf-4341-9d3b-8ca3f65717b4)

![bit-tricks](https://github.com/user-attachments/assets/96ab5a3b-d312-4386-b834-af1a2fd7c83f)

![bit-flags](https://github.com/user-attachments/assets/66562cc6-0ad7-4746-af76-d1a067d7266e)


### **Characters :**

Characters are commonly stored using a single byte of memory, which is 8 bits. This allows characters from 0 up to 255 to be stored. Characters are represented using the ASCII character encoding standard, which assigns a unique number to each character.

#### **Character Encoding :**

Character encoding is the process of representing characters in a computer using a unique code. There are several character encoding standards, including ASCII and Unicode.

- **ASCII** : The American Standard Code for Information Interchange (ASCII) is a character encoding standard that uses 7 or 8 bits to represent characters. It is used to represent text in computers.

- **Unicode** : Unicode is a character encoding standard that uses 16 bits to represent characters. It is used to represent text in multiple languages.

For example, the character 'A' is represented by the number 65 in ASCII. The character 'a' is represented by the number 97 in ASCII.

![ascii (1)](https://github.com/user-attachments/assets/02d58747-f600-42d9-853c-97539fa0147a)

- https://www.ascii-code.com/

### **Strings :**

Strings are sequences of characters. They are commonly stored using a word of memory, which is 4 bytes or 32 bits. Strings are terminated by a null character, which is represented by the number 0.

- **Null Character** : The null character is used to terminate strings in C. It is represented by the number 0 and is used to indicate the end of a string.

### **String Literals :**

String literals are sequences of characters enclosed in double quotes. They are used to represent strings in C programs. String literals are stored in read-only memory and cannot be modified.

- **Read-Only Memory** : Read-only memory is a type of computer memory that can only be read, not written to. It is used to store data that should not be modified, such as string literals.
- **Modifying Strings** : Strings stored in read-only memory cannot be modified. If you need to modify a string, you should copy it to a writable memory location first.


### **Overflow errors**

Overflow errors occur when the result of an arithmetic operation is too large to be represented in the available memory. For example, if you try to add two large numbers together and the result is larger than the maximum value that can be stored in memory, an overflow error will occur.

![integer-overflow](https://github.com/user-attachments/assets/f7ebb7af-98d9-4b36-b132-9fbba2460606)

Example of overflow error :

If we are working with 8-bit numbers and all we can store is 8 bits, the following problem might occur.For example, if we add these two 8-bit numbers:

For example, if we add these two 8-bit numbers:

![Untitled (1)](https://github.com/user-attachments/assets/c17c8d1a-0bc2-402f-bb26-51705eb81fc5)

The carried 1 in the left-hand column would be the ninth digit in our answer, but we are limited to 8 bits. This carry is lost, which means we have an overflow error.

In this example, we tried to add 11000110 (198 in decimal) and 11100011 (227 in decimal).198 + 227 = 425 in decimal. The answer produces an overflow error because we needed a 9th bit. Without a 9th bit that information is lost, giving an incorrect answer of 10101001 in binary, which is 169 in decimal.

The largest value we can store in 8 bits is 11111111, or 255 in decimal. So the reason for the overflow error is that 425 is too large a number to store in 8 bits.

 - https://statmath.wu.ac.at/courses/data-analysis/itdtHTML/node55.html


![big-integers](https://github.com/user-attachments/assets/08902d8e-80b5-42f7-82b6-fd3b65f45256)

![32-bit-small](https://github.com/user-attachments/assets/65f51eb6-4252-4499-ad01-ad6bebfee196)




### Memory allocation

Memory allocation is the process of reserving a block of memory for a program to use. In C, memory allocation is done using the malloc function, which allocates a block of memory of a specified size and returns a pointer to the beginning of the block.

- **malloc** : The malloc function is used to allocate a block of memory of a specified size. It returns a pointer to the beginning of the block.

- **free** : The free function is used to deallocate a block of memory that was previously allocated using malloc. It frees the memory so that it can be used by other programs.

- **Memory Leaks** : Memory leaks occur when a program allocates memory but does not deallocate it when it is no longer needed. This can lead to a loss of memory and a decrease in performance.


![memory-allocation (1)](https://github.com/user-attachments/assets/020582e4-3403-4d16-aa37-a51ed9640616)


