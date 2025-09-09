# C Basics Quiz – Identifiers & Keywords

This project contains **10 small C programs** (`quiz01.c` … `quiz10.c`) that demonstrate basic rules of **identifiers and keywords** in C.

Each program is framed as a **quiz question** with code that shows the correct behavior.

---

## Questions

1. **Keywords as Identifiers**
   - Can you name a variable `int`?
   - Answer: No. Keywords are reserved. Use `myInt` instead.

2. **Case Sensitivity**
   - Are `value` and `Value` the same?
   - Answer: No. Identifiers are case-sensitive.

3. **Starting with Numbers**
   - Can an identifier start with a number?
   - Answer: No. It must start with a letter or underscore.

4. **Underscores in Identifiers**
   - Can we use underscores?
   - Answer: Yes, e.g., `my_variable`.

5. **Special Characters**
   - Can we use `$`, `%`, or `@`?
   - Answer: No. Only letters, digits, and `_` allowed.

6. **Identifier Length**
   - How long can identifiers be?
   - Answer: Standard requires at least 31 characters significant.

7. **Starting with Underscore**
   - Can identifiers start with `_`?
   - Answer: Yes, though reserved in some cases for system use.

8. **Shadowing Function Names**
   - Can we name a variable `printf`?
   - Answer: Yes, but confusing. Avoid it!

9. **Reserved Keywords**
   - Is `return` always reserved?
   - Answer: Yes. You can’t use it as a variable name.

10. **Whitespace in Identifiers**
    - Can you write `my var`?
    - Answer: No. Use `my_var`.

---

## How to Compile & Run

```bash
gcc quiz01.c -o quiz01 && ./quiz01
gcc quiz02.c -o quiz02 && ./quiz02
gcc quiz03.c -o quiz03 && ./quiz03
gcc quiz04.c -o quiz04 && ./quiz04
gcc quiz05.c -o quiz05 && ./quiz05
gcc quiz06.c -o quiz06 && ./quiz06
gcc quiz07.c -o quiz07 && ./quiz07
gcc quiz08.c -o quiz08 && ./quiz08
gcc quiz09.c -o quiz09 && ./quiz09
gcc quiz10.c -o quiz10 && ./quiz10
```

---

## Solutions

⚠️ **Warning:** Try solving the quizzes yourself before testing the solutions below!  

```bash
cd Solution
gcc solution01.c -o solution01 && ./solution01
gcc solution02.c -o solution02 && ./solution02
gcc solution03.c -o solution03 && ./solution03
gcc solution04.c -o solution04 && ./solution04
gcc solution05.c -o solution05 && ./solution05
gcc solution06.c -o solution06 && ./solution06
gcc solution07.c -o solution07 && ./solution07
gcc solution08.c -o solution08 && ./solution08
gcc solution09.c -o solution09 && ./solution09
gcc solution10.c -o solution10 && ./solution10
```

---
