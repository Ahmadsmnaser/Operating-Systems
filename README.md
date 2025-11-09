# ⚙️ Operating Systems — xv6 Kernel Enhancements

## 🚀 Overview  
This project consists of kernel modifications and extensions for xv6 (a teaching operating system based on Unix v6) to implement advanced OS mechanisms including system calls, synchronization primitives, and shared memory support.  
The goal was to deepen my understanding of low-level systems programming, concurrency, and process-kernel interaction.

## 🎯 Key Enhancements  
- ✅ Added new system calls (for example: `sys_foo`, `sys_bar`)  
- ✅ Implemented shared memory between user processes using page-table reference counting  
- ✅ Developed synchronization primitives: sleep/wakeup, locks, and condition variables  
- ✅ Extended xv6 to support safe user→kernel data transfer and process memory management improvements  
- ✅ Conducted debugging using QEMU and GDB for kernel isolation and race condition elimination  

## 🧠 Architecture & Concepts  

User Process ↔ Kernel (xv6)
│
│— System Call Interface
│— Shared Memory Page Table & Reference Count
│— Sleep/Wakeup & Locks Mechanism


- This project required strong skills in C, assembly (for trap handling), kernel memory management, concurrency control, and debugging in a minimal OS environment.

## 🛠️ Tech Stack  
- **Languages:** C, Assembly  
- **Platform:** xv6 (Unix v6 teaching OS)  
- **Tools:** QEMU, GDB, Make, Git  
- **Concepts:** Virtual memory, system calls, sleep/wakeup, locks, synchronization, shared memory  

## ▶️ Build & Run  
```bash
cd Operating-Systems/xv6
make qemu

Choose test mode my_test or instructions in my_extensions to observe new syscalls and shared memory functionality.
🔮 Future Improvements

    Add support for multiple shared-memory segments per process

    Implement priority inheritance for locks to avoid priority inversion

    Add statistical monitoring of lock usage and process wait times

    Extend to multiprocessor xv6 environment
طط
##🧑‍💻 Author

- Ahmad Naser
📧 Ahmadsmnaser@gmail.com
