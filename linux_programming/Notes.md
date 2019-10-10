# Linux Programming Interface

Operating Systems has 2 different meanings: 
    1. The entire package consisting of the central software managing a computer resources
       and all of the accompanying standard software tools, such as cmdline interpreters, gui,
       file utilities and editors. 
    2. The central software that manages and allocates computer resources: 
       a. CPU
       b. RAM
       c. Devices
    Note: the term Kernel is often a synonynm for #2. 

- It is possible to run programs on a computer without a kernel. 

- The presence of the kernel greatly 'simplifies' the writing and use of other programs
  and increases the power and flexibility available to programmers. 

- The kernel does this by providing a software layer to manage the limited resources of a 
  computer. 

The Linux kernel executable typically resides at:
/boot/vmlinuz or a similiar convention::[man hier]

unix->vmunix->vmlinux-vmlinuz

UNIX, the kernel was once called unix. 

vmunix, but when virtual memory was added it was called vmlinux. 

vmlinux, on linux the filename mirrors the system name.

vmlinuz, the z replaces the final x to signify that the kernel is a compressed executable. 