# 📚 Libft - Your First Step Toward Mastering C!

Welcome to **Libft**, the ultimate foundational library for C programmers! This project is your entry point into creating your very own standard library, complete with essential functions that every developer relies on. With this, you'll master the art of memory manipulation, string handling, and even venture into linked lists.

---

## 🚀 Features

Here’s what Libft equips you with:

1. **Memory Management**
   - Copy, set, move, or zero out memory blocks effortlessly.

2. **String Manipulation**
   - Find substrings, duplicate, compare, and transform strings like a pro.

3. **Character Checks**
   - Is it printable? Alphabetic? A digit? Libft knows!

4. **Math & Conversion**
   - Turn strings into numbers and handle basic mathematical operations.

5. **Linked Lists (Bonus)**
   - Build and manipulate linked lists to unleash the full power of dynamic data structures!

---

## 🛠️ How It Works

### Core Implementation

- **Functions:**
  Your library includes recreations of standard library functions like `strlen`, `strchr`, `memset`, `atoi`, and more.

- **Bonus:**
  Learn advanced concepts like linked list creation and traversal.

---

## 📂 Directory Structure

```
libft/
├──.	             # Source files (organized by categories) 
├── libft.h          # Header file for function prototypes and macros
├── Makefile         # Build system to compile and clean your library
├── README.md        # You're reading it now!
```

---

## 🔧 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/ayaarab/libft.git
   cd libft
   ```

2. Compile the library:
   ```bash
   make
   ```

3. Use `libft.a` in your projects:
   ```c
   gcc your_code.c -L. -lft -o your_program
   ./your_program
   ```

---

## 🌟 Key Highlights

- **Coding Style**:
  - Adheres to strict norms (42 Norm).
  - No more than 25 lines per function.

- **Makefile Targets**:
  - `make` – Compiles the library.
  - `make clean` – Removes object files.
  - `make fclean` – Cleans everything, including the library.
  - `make re` – Cleans and recompiles the library.

---

## 📜 Example

Here's a simple example of using `libft`:

```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, Libft!");
    if (str) {
        ft_putstr_fd(str, 1);
        free(str);
    }
    return 0;
}
```

Compile with:
```bash
gcc main.c -L. -lft -o hello_libft
```

---

## 🏆 Lessons Learned

- Understanding the inner workings of standard library functions.
- Gaining confidence in memory and string manipulation.
- Building reusable code that can power future projects!

---

## 🧑‍💻 Author

👤 **Aarab Ayoub**  
📧 [ayaarab@student.1337.fr](mailto:ayaarab@student.1337.fr)

---

## 📜 License

This project is part of the 42 curriculum and does not have a specific license.
