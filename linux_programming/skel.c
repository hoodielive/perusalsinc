int unbuff;

int main(argc, argv)
     int argc;
     char * argv[];

{
  char c;
  char *cp;
  int copied = 0;

  while (argc > 1) {
    switch (*argv[1]) {
    case '-': /* argv[1] is the option string */
      cp = argv[1];
      while(c = *++cp) {
        /* process each letter */
        switch(c) {
        case 'u': unbuff++;
          break;
        default /* unexpected letter */
          ; 
          }
      }
      break;
    default: /* other args */
      copy(argv[1]);
      copied++;
    }
    argc--; argv++;
  }
  if(copied==0) {
    copy((char*)0);
  }
  return(0);
}
