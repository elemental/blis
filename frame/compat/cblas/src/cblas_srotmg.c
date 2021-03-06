#include "bli_config.h"
#include "bli_config_macro_defs.h"
#include "bli_system.h"
#include "bli_type_defs.h"
#include "bli_cblas.h"
#ifdef BLIS_ENABLE_CBLAS
/*
 * cblas_srotmg.c
 *
 * The program is a C interface to srotmg.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "cblas_f77.h"
void cblas_srotmg( float *d1, float *d2, float *b1, 
                        const float b2, float *p)
{
   F77_srotmg(d1,d2,b1,&b2,p);
}
#endif
