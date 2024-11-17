section .data
	hello db 'Hello, world!' , 10	; The string to print , a new line

section .text
	global _start			; Entry point for the program

_start:
	; Write the string to printout
	mov eax, 4			; syscall number for sys_write
	mov ebx, 1			; file discriptor 1 is stdout
	mov ecx, hello			; pointer to the string
	mov edx, 13			; size of the string
	int 0x80			; call the kernel

	;exit program

	mov eax, 1			; syscall number for sys_exit
	mov ebx, ebx			; return 0 status
	int 0x80			; call the kernel
