; Developed by Kian Naquines
; Assembly Implementation of Arithmithic Operations
; 06/16/2024

section .data
	result dq 0

.code
Sum PROC
	mov rax, rcx
	mov rbx, rdx
	add rax, rbx
	ret
Sum ENDP


Multiply PROC
	mov rax, rcx
	mov rbx, rdx
	imul rax, rbx
	ret
Multiply ENDP

Subtraction PROC
	mov rax, rcx
	mov rbx, rdx
	sub rax, rbx
	ret
Subtraction ENDP

Division PROC
	mov rax, rcx
    mov rbx, rdx
    xor rdx, rdx
    div rbx
    ret
Division ENDP
	

end