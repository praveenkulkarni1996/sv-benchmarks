/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "./assert.h"
void __blast_assert(void) 
{ 

  {
  ERROR: 
#line 4
  goto ERROR;
}
}
#line 5 "files/test_cut_trace.c"
int VERDICT_SAFE  ;
#line 7 "files/test_cut_trace.c"
int main(void) 
{ int z ;
  int a ;

  {
#line 9
  z = 0;
#line 10
  if (z == 0) {

  } else {
    {
#line 10
    __blast_assert();
    }
  }
#line 11
  a = z;
#line 12
  if (a == 0) {

  } else {
    {
#line 12
    __blast_assert();
    }
  }
#line 13
  return (0);
}
}
