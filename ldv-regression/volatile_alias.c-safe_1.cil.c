/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 7 "files/volatile_alias.c"
int VERDICT_SAFE  ;
#line 14 "files/volatile_alias.c"
int main(void) 
{ int a ;
  int *p ;
  int __cil_tmp3 ;

  {
#line 16
  a = 4;
#line 17
  p = & a;
#line 18
  p = & a;
#line 19
  a = a - 4;
  {
#line 20
  __cil_tmp3 = *p;
#line 20
  if (__cil_tmp3 != 0) {
    ERROR: 
#line 21
    goto ERROR;
  } else {

  }
  }
#line 23
  return (0);
}
}
