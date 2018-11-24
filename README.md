# Ft_Printf  

##### Header

__Author:__ Yener Tuz  
__Creation date__: 09/26/2018  

* A 42USA project

##### Intro

Recoding the famous `<stdio.h>` function `printf`

##### Requirements

gcc, sh, a terminal, `<unist.d>`, `<stdlib.h>`, `<string.h>`, `<stdargs.h>` 

##### Usage

* Run `relib.sh` by entering `sh relib.sh` in the command prompt  
  
* To link the library into another project:  
	1. clone this repository into your project `git clone https://github.com/yenertuz/mini_lib_c  libft`  
	2. `sh relib.sh` to get the `libft.a` file  
	3. while compiling your project, link this library: `gcc -Ilibft/inc/ -Llibft -lft *.c`   
	

* example usage:

```
ft_printf("%s: %i\n", "Just trying to print a number", 1000);
```
