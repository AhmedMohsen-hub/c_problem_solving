	.file	"sum_arr_ptr.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter sizeof arr \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "Enter elements of array\0"
LC3:
	.ascii "sum=%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB24:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$0, 28(%esp)
	movl	$0, 24(%esp)
	movl	$LC0, (%esp)
	call	_puts
	leal	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	16(%esp), %eax
	sall	$2, %eax
	movl	%eax, (%esp)
	call	_malloc
	movl	%eax, 20(%esp)
	movl	$LC2, (%esp)
	call	_puts
	jmp	L2
L3:
	movl	24(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	addl	$1, 24(%esp)
L2:
	movl	16(%esp), %eax
	cmpl	%eax, 24(%esp)
	jl	L3
	movl	$0, 24(%esp)
	jmp	L4
L5:
	movl	24(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	addl	%eax, 28(%esp)
	addl	$1, 24(%esp)
L4:
	cmpl	$4, 24(%esp)
	jle	L5
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE24:
	.ident	"GCC: (MinGW.org GCC-8.2.0-3) 8.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
