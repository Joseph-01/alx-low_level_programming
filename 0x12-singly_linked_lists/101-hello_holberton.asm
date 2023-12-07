section .data
hello_msg db 'Hello, Holberton',0xA,0

section .text
extern printf
global main

main:
push rbp
mov rdi, hello_msg
call printf
pop rbp
ret
