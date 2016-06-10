//------------------------James Modified for K5.-------
#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_mag.h>
static struct mag_hw cust_mag_hw_mxg2320 = {
    .i2c_num = 2,
	.i2c_addr = {0x0D,0,0,0},
/*lenovo-sw caoyi1 modify Msensor direction begin*/
    .direction = 1,
/*lenovo-sw caoyi1 modify Msensor direction end*/
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
    .is_batch_supported = false,
};
struct mag_hw* get_cust_mag_hw_mxg2320(void) 
{
    return &cust_mag_hw_mxg2320;
}
//------------------------------------------------

