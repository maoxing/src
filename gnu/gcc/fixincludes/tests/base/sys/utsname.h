/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/sys/utsname.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( ULTRIX_FIX_FIXPROTO_CHECK )
/* ULTRIX's uname */
struct utsname;
extern	int	uname();
#endif  /* ULTRIX_FIX_FIXPROTO_CHECK */
