/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 8 "files/nested_structure.c"
struct Innermost {
   int c ;
};
#line 8 "files/nested_structure.c"
struct Inner {
   int b ;
   struct Innermost *y ;
};
#line 8 "files/nested_structure.c"
struct Toplev {
   int a ;
   struct Inner *x ;
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
#line 6 "files/nested_structure.c"
int VERDICT_SAFE  ;
#line 18 "files/nested_structure.c"
int main(void) 
{ struct Innermost im ;
  struct Inner inner ;
  struct Toplev good ;
  struct Innermost *__cil_tmp4 ;
  struct Innermost *__cil_tmp5 ;
  int __cil_tmp6 ;

  {
#line 20
  im.c = 3;
#line 21
  inner.b = 2;
#line 21
  inner.y = & im;
#line 22
  good.a = 1;
#line 22
  good.x = & inner;
#line 23
  __cil_tmp4 = (good.x)->y;
#line 23
  __cil_tmp4->c = 4;
  {
#line 24
  __cil_tmp5 = (good.x)->y;
#line 24
  __cil_tmp6 = __cil_tmp5->c;
#line 24
  if (__cil_tmp6 == 4) {

  } else {
    {
#line 24
    __blast_assert();
    }
  }
  }
#line 25
  return (0);
}
}
