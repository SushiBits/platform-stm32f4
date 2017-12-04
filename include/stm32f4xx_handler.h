/*
 * stm32f4xx_handler.h
 *
 *  Created on: Dec 4, 2017
 *      Author: technix
 */

#if defined(STM32F405xx)
  #include "stm32f405xx_handler.h"
#elif defined(STM32F415xx)
  #include "stm32f415xx_handler.h"
#elif defined(STM32F407xx)
  #include "stm32f407xx_handler.h"
#elif defined(STM32F417xx)
  #include "stm32f417xx_handler.h"
#elif defined(STM32F427xx)
  #include "stm32f427xx_handler.h"
#elif defined(STM32F437xx)
  #include "stm32f437xx_handler.h"
#elif defined(STM32F429xx)
  #include "stm32f429xx_handler.h"
#elif defined(STM32F439xx)
  #include "stm32f439xx_handler.h"
#elif defined(STM32F401xC)
  #include "stm32f401xc_handler.h"
#elif defined(STM32F401xE)
  #include "stm32f401xe_handler.h"
#elif defined(STM32F410Tx)
  #include "stm32f410tx_handler.h"
#elif defined(STM32F410Cx)
  #include "stm32f410cx_handler.h"
#elif defined(STM32F410Rx)
  #include "stm32f410rx_handler.h"
#elif defined(STM32F411xE)
  #include "stm32f411xe_handler.h"
#elif defined(STM32F446xx)
  #include "stm32f446xx_handler.h"
#elif defined(STM32F469xx)
  #include "stm32f469xx_handler.h"
#elif defined(STM32F479xx)
  #include "stm32f479xx_handler.h"
#elif defined(STM32F412Cx)
  #include "stm32f412cx_handler.h"
#elif defined(STM32F412Zx)
  #include "stm32f412zx_handler.h"
#elif defined(STM32F412Rx)
  #include "stm32f412rx_handler.h"
#elif defined(STM32F412Vx)
  #include "stm32f412vx_handler.h"
#elif defined(STM32F413xx)
  #include "stm32f413xx_handler.h"
#elif defined(STM32F423xx)
  #include "stm32f423xx_handler.h"
#else
 #error "Please select first the target STM32F4xx device used in your application (in stm32f4xx.h file)"
#endif
