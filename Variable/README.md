# 📦 Understanding Variables in C Programming

This directory focuses on the core concept of variables in C programming. It covers how data is stored in memory, the syntax for declaring and initializing variables, and the strict rules governing variable names.

---

## 💻 Practical Code Implementations

*(Put your variable code examples inside this directory, e.g., `variable_demo.c`)*

---

## 🔍 [EN] Deep-Dive: Concept, Declaration & Rules

### 1. What is a Variable?
A variable is a named storage location in the computer's memory (RAM) that holds a value. Think of it as a labeled box where you can store, update, and retrieve data during program execution.

### 2. Variable Declaration vs. Initialization
* **Declaration:** Telling the compiler the variable's name and what type of data it will hold. This reserves space in memory.
  ```c
  int userAge; // Declaration (Allocates space for an integer)
  ```
* **Initialization:** Assigning an initial value to the declared variable for the very first time.
  ```c
  userAge = 23; // Initialization (Stores 23 inside the box)
  ```
* **Combined Syntax:** You can also declare and initialize a variable in a single line:
  ```c
  float productPrice = 99.99;
  ```

### 3. Naming Rules (The C Standards)
1. **Letters, Digits & Underscore:** A variable name can only contain letters (`a-z`, `A-Z`), digits (`0-9`), and underscores (`_`). No special characters like `@`, `#`, `$`, `%` are allowed.
   * ✅ *Valid:* `my_age`, `score1`, `_total`
   * ❌ *Invalid:* `my@age`, `score$`, `total%`
2. **Cannot Start with a Digit:** The first character must be a letter or an underscore. It can never start with a number.
   * ✅ *Valid:* `value1`, `_value`
   * ❌ *Invalid:* `1value`, `5th_number`
3. **No White Spaces:** Variable names cannot contain spaces. Use `snake_case` or `camelCase` for multi-word names.
   * ✅ *Valid:* `my_roll_number`, `myRollNumber`
   * ❌ *Invalid:* `my roll number`
4. **No Keywords Allowed:** Language keywords (like `int`, `float`, `if`, `else`, `return`) cannot be used as names.
   * ✅ *Valid:* `my_int`, `number_float`
   * ❌ *Invalid:* `int`, `if`, `return`
5. **Case-Sensitive:** Variable names distinguish between uppercase and lowercase. `age`, `Age`, and `AGE` are three completely different variables.
6. **Meaningful Names:** Always use descriptive names that reflect the data inside.
   * ✅ *Good:* `student_name`, `total_price`
   * ❌ *Bad:* `x`, `aaa`, `temp123`

---

## 🔍 [BN] ভেরিয়েবলের গভীর ব্যাখ্যা, ডিক্লারেশন এবং নিয়মাবলী

### ১. ভেরিয়েবল কী?
ভেরিয়েবল হলো কম্পিউটারের মেমোরিতে (RAM) থাকা একটি নামযুক্ত স্টোরেজ বা পাত্রের মতো। সহজ কথায়, এটি একটি লেবেল লাগানো বক্স, যার ভেতরে আমরা আমাদের প্রয়োজন অনুযায়ী ডেটা রাখতে পারি, পরিবর্তন করতে পারি এবং নাম ধরে ডেকে তা ব্যবহার করতে পারি।

### ২. ভেরিয়েবল ডিক্লারেশন বনাম ইনিশিয়ালাইজেশন
* **Declaration (ঘোষণা করা):** কম্পাইলারকে ভেরিয়েবলের নাম এবং সেটি কী ধরণের ডেটা রাখবে (যেমন- পূর্ণসংখ্যা নাকি দশমিক সংখ্যা) তা জানিয়ে দেওয়া। এর মাধ্যমে মেমোরিতে জায়গা বরাদ্দ হয়।
  ```c
  int userAge; // ডিক্লারেশন (একটি ইন্টিজারের জন্য মেমোরিতে জায়গা বরাদ্দ হলো)
  ```
* **Initialization (মান নির্ধারণ):** ডিক্লেয়ার করা ভেরিয়েবলের ভেতরে একদম প্রথমবার কোনো মান বা ভ্যালু ঢুকিয়ে দেওয়া।
  ```c
  userAge = 23; // ইনিশিয়ালাইজেশন (বক্সের ভেতরে ২৩ সংখ্যাটি রাখা হলো)
  ```
* **একত্রে ডিক্লারেশন ও ইনিশিয়ালাইজেশন:** চাইলে এক লাইনেই দুটি কাজ একসাথে করা যায়:
  ```c
  float productPrice = 99.99;
  ```

### ৩. ভেরিয়েবল লেখার মূল নিয়মাবলী (C Standards)
১. **লেটার, ডিজিট এবং আন্ডারস্কোর:** ভেরিয়েবলের নাম শুধুমাত্র ইংরেজি অক্ষর (`a-z`, `A-Z`), সংখ্যা (`0-9`) এবং আন্ডারস্কোর (`_`) দিয়ে তৈরি হতে পারবে। কোনো স্পেশাল ক্যারেক্টার (যেমন: `@`, `#`, `$`, `%`) ব্যবহার করা যাবে না।
   * ✅ *বৈধ:* `my_age`, `score1`, `_total`
   * ❌ *অবৈধ:* `my@age`, `score$`, `total%`
২. **প্রথম ক্যারেক্টার সংখ্যা হতে পারবে না:** ভেরিয়েবলের নামের প্রথম অক্ষরটি অবশ্যই একটি লেটার অথবা আন্ডারস্কোর হতে হবে। কখনোই সংখ্যা দিয়ে নাম শুরু করা যাবে না।
   * ✅ *বৈধ:* `value1`, `_value`
   * ❌ *অবৈধ:* `1value`, `5th_number`
৩. **কোনো স্পেস বা ফাঁকা জায়গা রাখা যাবে না:** ভেরিয়েবলের নামের মাঝখানে কোনো স্পেস দেওয়া যাবে না। দুটি শব্দ জোড়া দিতে আন্ডারস্কোর (`_`) বা `camelCase` ব্যবহার করতে হবে।
   * ✅ *বৈধ:* `my_roll_number`, `myRollNumber`
   * ❌ *অবৈধ:* `my roll number`
৪. **কিওয়ার্ড বা সংরক্ষিত শব্দ ব্যবহার নিষিদ্ধ:** সি ল্যাঙ্গুয়েজের নিজস্ব কিছু সংরক্ষিত শব্দ বা কিওয়ার্ড (যেমন: `int`, `float`, `if`, `else`, `return`) ভেরিয়েবলের নাম হিসেবে ব্যবহার করা যাবে না।
   * ✅ *বৈধ:* `my_int`, `number_float`
   * ❌ *অবৈধ:* `int`, `if`, `return`
৫. **কেস-সেনসিটিভ (Case-Sensitive):** ভেরিয়েবল ছোট হাতের এবং বড় হাতের অক্ষরের মধ্যে পার্থক্য করে। অর্থাৎ, `age`, `Age`, এবং `AGE` তিনটি সম্পূর্ণ আলাদা ভেরিয়েবল হিসেবে মেমোরিতে আলাদা বক্স তৈরি করবে।
৬. **অর্থপূর্ণ নাম হওয়া উচিত:** এটি বাধ্যতামূলক নিয়ম না হলেও ভালো প্র্যাকটিস। ভেরিয়েবলের নাম এমন হওয়া উচিত যা দেখে সহজেই বোঝা যায় এর ভেতরে কী আছে (যেমন: `x` বা `aaa` না লিখে `total_price` লেখা)।

---

## 🛠️ Environment & Terminal Warning
When working inside this directory, ensure that your parent folders **do not contain any spaces or apostrophes (`'`)** (e.g., avoid paths like `Shariar's Folder`). This prevents internal terminal and `PSReadLine` tool crashes in Windows PowerShell.
