/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 11 "files/test_union.c"
union A {
   int list ;
   int l2 ;
   char *str ;
};
#line 2 "./assert.h"
void __blast_assert(void) 
{ 

  {
  ERROR: 
#line 4
  goto ERROR;
}
}
#line 4 "files/test_union.c"
int VERDICT_SAFE  ;
#line 17 "files/test_union.c"
int main(void) 
{ union A x ;

  {
#line 19
  x.list = 0;
#line 21
  if (x.l2 == 0) {

  } else {
    {
#line 21
    __blast_assert();
    }
  }
#line 25
  return (0);
}
}
