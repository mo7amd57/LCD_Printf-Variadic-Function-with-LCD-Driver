# LCD_Printf-Variadic-Function-with-LCD-Driver

Function Features:
✅ Supports various format specifiers: %d, %c, %s, %f, %u, %b, %x
✅ Handles escape sequences like \\n for newline and \\t for tab
✅ Implements cursor movement commands like %n and %t for new line and tab, respectively
Implementation Details:
LCD_Driver that simulate 3 CLCD from any type (2*16 ,2*40 ,4*20,.....) in my driver atmega 32
🧰 Arguments List Handling: Utilizes __builtin_va_list for handling variable arguments.
