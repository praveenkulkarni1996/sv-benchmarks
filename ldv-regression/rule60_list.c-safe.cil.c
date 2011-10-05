/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 211 "/usr/lib64/gcc/x86_64-suse-linux/4.5/include/stddef.h"
typedef unsigned long size_t;
#line 8 "files/rule60_list.c"
struct list_head {
   struct list_head *prev ;
   struct list_head *next ;
   int inserted ;
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
#line 51 "/usr/include/malloc.h"
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
#line 6 "files/rule60_list.c"
int VERDICT_SAFE  ;
#line 13 "files/rule60_list.c"
static void list_add(struct list_head *new , struct list_head *head ) 
{ int __cil_tmp3 ;

  {
  {
#line 14
  __cil_tmp3 = new->inserted;
#line 14
  if (__cil_tmp3 == 0) {

  } else {
    {
#line 14
    __blast_assert();
    }
  }
  }
#line 15
  new->inserted = 1;
#line 16
  return;
}
}
#line 18 "files/rule60_list.c"
static void list_del(struct list_head *entry ) 
{ int __cil_tmp2 ;

  {
  {
#line 19
  __cil_tmp2 = entry->inserted;
#line 19
  if (__cil_tmp2 == 1) {

  } else {
    {
#line 19
    __blast_assert();
    }
  }
  }
#line 20
  entry->inserted = 0;
#line 21
  return;
}
}
#line 23 "files/rule60_list.c"
static struct list_head head  ;
#line 25 "files/rule60_list.c"
int main(void) 
{ struct list_head *dev ;
  void *tmp ;
  void *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
#line 27
  tmp = malloc(24UL);
#line 27
  dev = (struct list_head *)tmp;
  }
  {
#line 28
  __cil_tmp3 = (void *)0;
#line 28
  __cil_tmp4 = (unsigned long )__cil_tmp3;
#line 28
  __cil_tmp5 = (unsigned long )dev;
#line 28
  if (__cil_tmp5 != __cil_tmp4) {
    {
#line 29
    dev->inserted = 0;
#line 30
    list_add(dev, & head);
#line 31
    list_del(dev);
#line 32
    list_add(dev, & head);
    }
  } else {

  }
  }
#line 34
  return (0);
}
}
