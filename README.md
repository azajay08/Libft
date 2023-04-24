# Libft @ Hive Helsinki

Libft is an individual project at Hive that requires us to re-create some standard
C library functions including some additional ones that can be used later to build a
library of useful functions for the rest of the Hive projects.

We are limited to what existing functions we are allowed to use. The challenge is trying
to create useful functions using only a select few. The `libft` is used in pretty much all Hive
projects, so it is important to update it with useful functions.

As with all Hive projects, they come with restraints and limitations. We have to abide by the rules of `Norminette`. Here are some of the rules we must follow:

```
* Must be written in C
* 25 lines maximum per function
* 5 functions maximum per file
* 80 columns wide maximum
* 5 variables per function maximum
* For loops are forbidden
* Declaration and an initialisation cannot be on the same line
* A function can take 4 named parameters maximum
* Functions allowed:
  * write
  * malloc
  * free
```

I am constantly adding functions to the `libft`. I have been adding functions that could be considered 
useful and universal so that they can be used in many projects. I have added
`ft_print` to the `libft`. `ft_print` is a project to recode the function `printf`. The use of `printf` is forbidden
at Hive, so it is very handy to have my own one that I can use freely.

Although `libft` was one of the very first projects at Hive, it is one of the most important ones. This project had one of the most strict evaluation processes, and rightly so. The functions in this library must be perfect with no chance of seg faulting or having memory leaks in order to rule them out when debugging projects where the `libft` is used.
