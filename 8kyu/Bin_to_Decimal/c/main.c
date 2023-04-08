unsigned bin_to_decimal(const char *bin) {
  unsigned int num = 0;
  while(*bin != '\0') {
    switch(*bin++) {  
      case '0':
        num *= 2;
        break;
      case '1':
        num = num * 2 + 1;
        break;
    }
  }
  return num;
}