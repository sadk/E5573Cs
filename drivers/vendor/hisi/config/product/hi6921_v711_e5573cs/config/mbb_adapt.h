/*************************************************************************
CAUTION : This file is Auto Generated by VBA based on ��V711 MBB PRODUCT_auto_adaptor.xlsm��.
          So, don't modify this file manually!
****************************************************************************/
#ifndef __MBB_PRODUCT_ADAPT_H__
#define __MBB_PRODUCT_ADAPT_H__


#ifdef __cplusplus
extern "C"
{
#endif


/****************************************************************************/
/*************************** MBB �������ļ���ʼ *****************************/
/****************************************************************************/
#define    GPIO_NULL                           (-1)               /* �޴�GPIOʱȡ-1 */
#define    MENU_KEY_GPIO                       (GPIO_NULL)        /* MENU/WPS�� */
#define    RESET_KEY_GPIO                      (GPIO_0_3)         /* RESET�� */
#define    WIFI_KEY_GPIO                       (GPIO_NULL)        /* WIFI/WLAN�� */
#define    FLIGHT_KEY_GPIO                     (GPIO_NULL)        /* FLIGHT�� */
#define    WIFI_ACTIVE_GPIO                    (GPIO_2_21)        /* wifi enable */
#define    WIFI_WAKEUP_BB_GPIO                 (GPIO_0_4)         /* wifi wakeup bb */
#define    CHG_ENABLE_GPIO                     (GPIO_2_1)         /* charge enable */
#define    CHG_BATT_LOW_INT                    (GPIO_2_4)         /* batt low int */
#define    CHG_BATT_ID_CHAN                    (0)                /* batt id hkadc channel */
#define    CHG_BATT_TEMP_CHAN                  (1)                /* batt temp hkadc channel */
#define    CHG_BATT_VOLT_CHAN                  (8)                /* batt volt hkadc channel */
#define    CHG_VBUS_VOLT_CHAN                  (-1)               /* vbus volt hkadc channel */
#define    CHG_USB_TEMP_CHAN                   (2)                /* USB temp hkadc channel */
#define    LCD_BACKLIGHT_GPIO                  (GPIO_NULL)        /* lcd backlight */
#define    LCD_ID00_GPIO                       (GPIO_NULL)        /* lcd id0 */
#define    LCD_ID01_GPIO                       (GPIO_NULL)        /* lcd id1 */
#define    OLED_ID0_GPIO                       (GPIO_NULL)        /* oled id0 */
#define    OLED_ID1_GPIO                       (GPIO_NULL)        /* oled id1 */
#define    OLED_CD_GPIO                        (GPIO_NULL)        /* oled cd */
#define    OTG_ID_DET_GPIO                     (GPIO_NULL)        /* otg detect */
#define    OTG_ID_SET_GPIO                     (GPIO_NULL)        /* otg set */
#define    DMDP_CONNECT_GPIO                   (GPIO_NULL)        /* dmdp connect */
#define    SD_DETECT_GPIO                      (GPIO_NULL)        /* sd detect */
#define    SIM0_DETECT_GPIO                    (GPIO_NULL)        /* sim detect */
#define    OTG_ID_SWITCH_GPIO                  (GPIO_NULL)        /* otg detect */
#define    OTG_VBUS_DET_GPIO                   (GPIO_NULL)        /* otg detect */
#define    EXTCHG_OTG_DET_GPIO                 (GPIO_NULL)        /* extchg otg detect */
#define    EXTCHG_CHG_ENABLE                   (GPIO_NULL)        /* extern charge enable */
#define    RE_ILIM_1A_GPIO                     (GPIO_NULL)        /* extcharge limit 1A current */
#define    RE_ILIM_2A_GPIO                     (GPIO_NULL)        /* extchg limit 2A current */
#define    OTG_ON_CTRL_GPIO                    (GPIO_NULL)        /* release power key */
#define    USB_GPIO_DM                         (GPIO_NULL)        /* usb DM detect */
#define    USB_GPIO_DP                         (GPIO_NULL)        /* usb DP detect */
#define    GPIO_USB_SELECT                     (GPIO_NULL)        /* usb select */
#define    GPIO_USB_ID                         (GPIO_NULL)        /* otg id */
#define    GPIO_PHY_LOWPOWEREN                 (GPIO_NULL)        /* phy lowpower enable */
#define    GPIO_PHY_RESET                      (GPIO_NULL)        /* phy reset */
#define    EXTCHG_SHORT_VOLT_CHAN              (-1)               /* extchg volt channel */
#define    LCD_RESET_N                         (GPIO_NULL)        /* LCD reset */

/******************************************************************************/
/***************************** MBB �������ļ����� *****************************/
/******************************************************************************/


#ifdef __cplusplus
}
#endif
#endif /*__MBB_PRODUCT_ADAPT_H__ */