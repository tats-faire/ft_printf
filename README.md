# printf, but recoded

This version of printf handles the following range of conversion specifiers:
- %c (single character)
- %s (string)
- %d and %i (signed decimal integer)
- %u (unsigned decimal integer)
- %p (void *pointer argument converted to hexadecimal)
- %x (unsigned hexadecimal integer, in lowercase)
- %X (unsigned hexadecimal integer, in uppercase)
- %% (for writing a single % character)