# 🚀 Getting Started: Introduction to C Programming

This directory marks the very beginning of my C programming learning journey. It contains the absolute foundational codes, focusing on understanding the program structure, compilation process, and basic console output.

---

## 💻 Code Structure

```c
#include <stdio.h>

int main() {
    // Printing the classic first message
    printf("Hello, World!\n");
    return 0;
}
```

---

## 🔍 [EN] Deep-Dive: How the Code Works Line-by-Line

### 1. `#include <stdio.h>` (The Header File)
* **What it is:** This is a **Preprocessor Directive**. 
* **Why we need it:** `stdio.h` stands for **Standard Input Output header file**. It contains the built-in declarations of functions like `printf()`. Before compilation, the preprocessor copies the entire code of `stdio.h` into our file so the compiler recognizes `printf()`.

### 2. `int main()` (The Entry Point)
* **What it is:** This is the primary function where every C program begins execution. The Operating System (OS) strictly looks for a function named `main` to kickstart the program. 
* **Why `int`?:** It tells the OS that when this function finishes its job, it will return an integer value back to the system as a status report.

### 3. `{` and `}` (The Scope/Block)
* **Start Point `{`:** The opening curly brace marks the **exact beginning** of the execution block.
* **End Point `}`:** The closing curly brace marks the **exact physical end** of the function.

### 4. `printf("Hello, World!\n");` & Semicolon `;`
* **How it works:** `printf()` displays the text inside the double quotes onto the terminal screen. The `\n` inserts a new line.
* **The Break Point `;` (Semicolon):** Acts as a **Statement Terminator**. It tells the compiler that this specific instruction is complete. The execution breaks here, and the system moves to the next line.

### 5. `return 0;` (The Graceful Exit)
* **How it works:** This is where the code **logically ends**. Returning `0` to the OS is a universal success signal, confirming the program executed perfectly without any runtime crashes.

---

## 🔍 [BN] কোডের লাইন-বাই-line গভীর ব্যাখ্যা (বাংলা সংস্করণ)

### ১. `#include <stdio.h>` (হেডার ফাইল)
* **এটি কী:** এটি একটি **প্রিপ্রসেসর ডিরেক্টিভ**।
* **কেন প্রয়োজন:** `stdio.h` এর পূর্ণরূপ হলো **Standard Input Output header file**। এর ভেতরে `printf()` এর মতো দরকারি ফাংশনগুলোর কাজের নিয়ম লেখা থাকে। কোড কমপাইল হওয়ার আগেই এই লাইনের মাধ্যমে `stdio.h` ফাইলটি আমাদের কোডের সাথে যুক্ত হয়ে যায়, যাতে কম্পাইলার `printf()` শব্দটিকে চিনতে পারে।

### ২. `int main()` (মেইন এন্ট্রি পয়েন্ট)
* **এটি কী:** এটি হলো মূল ফাংশন যেখান থেকে যেকোনো C প্রোগ্রামের রান হওয়া শুরু হয়। আমাদের অপারেটিং সিস্টেম (OS) কোড রান করার জন্য প্রথমেই এই `main` নামটিকে খোঁজে।
* **কেন `int`?:** `int` মানে ইন্টিজার (পূর্ণসংখ্যা)। এটি ওএস-কে জানায় যে, মেইন ফাংশনটির কাজ শেষ হলে এটি একটি পূর্ণসংখ্যা রিটার্ন করে সিস্টেমকে নিজের কাজের স্ট্যাটাস রিপোর্ট দেবে।

### ৩. `{` এবং `}` (স্কোপ বা সীমানা)
* **শুরু `{`:** এই ওপেনিং কার্লি ব্রেস দিয়ে মেইন ফাংশনের কাজের **প্রকৃত শুরু** নির্দেশ করে।
* **শেষ `}`:** এই ক্লোজিং কার্লি ব্রেস দিয়ে ফাংশনের কাজের **ভৌত বা চূড়ান্ত সমাপ্তি** বোঝায়।

### ৪. `printf("Hello, World!\n");` এবং সেমিকোলন `;`
* **কাজ:** এটি স্ক্রিনে ডাবল কোটেশনের `""` ভেতরের টেক্সট দেখানোর একটি বিল্ট-ইন ফাংশন। আর `\n` ব্যবহার করা হয় লেখা শেষে একটি নতুন লাইন তৈরি করার জন্য।
* **ব্রেকিং পয়েন্ট `;` (সেমিকোলন):** একে বলা হয় **স্টেটমেন্ট টার্মিনেটর**। এটি কম্পাইলারকে বলে যে এই নির্দেশের কাজ এখানেই শেষ বা ব্রেক। এবার পরবর্তী লাইনের নির্দেশ প্রসেস করো।

### ৫. `return 0;` (সফল সমাপ্তি)
* **কাজ:** এখানে কোডের **লজিক্যাল সমাপ্তি** ঘটে এবং প্রোগ্রাম থেকে বের হয়ে যায়। অপারেটিং সিস্টেমকে `0` ফেরত দেওয়ার আন্তর্জাতিক অর্থ হলো—"প্রোগ্রামটি কোনো ক্র্যাশ বা এরর ছাড়াই সফলভাবে সম্পূর্ণ সম্পন্ন হয়েছে।"

---

## 🛠️ Compilation & Execution Log

1. Open your terminal and navigate into this folder.
2. **Path Caution:** Ensure folder names have **no spaces or apostrophes (`'`)** to avoid internal terminal/PowerShell crashes.
3. Compile using GCC:
   ```bash
   gcc hello.c -o hello
   ```
4. Run the executable:
   - **Windows:** `.\hello`
   - **Linux/macOS:** `./hello`
