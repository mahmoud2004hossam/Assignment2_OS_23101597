
# Assignment2_OS_23101597

This repository contains several C programs related to Operating Systems concepts such as process creation, forking, and basic system-level operations. Each `.c` file represents a different task or experiment.

---

## 📌 Prerequisites

Before compiling or running the programs, ensure that GCC (GNU Compiler Collection) and development tools are installed on your system.

### ✔ Install GCC on Ubuntu / Debian
```bash
sudo apt update
sudo apt install gcc
sudo apt install build-essential
````

### ✔ Verify installation

```bash
gcc --version
make --version
```

---

## 📁 Repository Structure

```
Assignment2_OS_23101597/
│
├── fork.c
├── mahmoud.c
├── mahmoud1.c
├── mahmoud2.c
├── LICENSE
└── README.md
```


## ▶️ Compiling and Running Programs

You can compile and run each C source file manually using GCC.

### ✔ Compile any file

```bash
gcc filename.c -o output
```

### ✔ Examples

#### Compile:

```bash
gcc fork.c -o fork_out
gcc mahmoud.c -o mahmoud_out
gcc mahmoud1.c -o mahmoud1_out
gcc mahmoud2.c -o mahmoud2_out
```

#### Run:

```bash
./fork_out
./mahmoud_out
./mahmoud1_out
./mahmoud2_out
```

---

## 🛠 Optional: Using a Makefile (if added later)

```bash
make         # Build all tasks
make task1   # Run Task 1
make task2   # Run Task 2
make task3   # Run Task 3
make clean   # Remove compiled output files
```

