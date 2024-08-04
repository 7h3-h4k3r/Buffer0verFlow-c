
# BUFFER OVER FLOW 

In programming and information security, a buffer overflow or buffer overrun is an anomaly whereby a program writes data to a buffer beyond the buffer's allocated memory, overwriting adjacent memory locations.


## DEBUG 

`gcc -g buffoverflow.c`

`gdb -q ./a.out`

`break main`

![App Screenshot](images/buffoverflowGdb.PNG)



`char_one`
![App Screenshot](images/char_one_addres.PNG)
`char_two`
![App Screenshot](images/char_two_address.PNG)
`var_int`
![App Screenshot](images/var_int.PNG)

`0X61 /97 /141	/61	/01100001	/a	/&#97;	 	/Lowercase a`
![App Screenshot](images/61_assci_is_a.PNG)