/*****************************************************************************
 *                             header file                                   *
 *****************************************************************************/
#include "hml/hml.h"

/*****************************************************************************/
/**
 * \author      Amy Chung
 * \date
 * \brief       main function
 * \param[in]
 * \return      none
 * \ingroup     example
 * \remarks
 ******************************************************************************/
void
main (void)
{
    GPIO_resetBitValue (PERIPH_GPIO_4, PERIPH_GPIO_PIN_5);

    while (true)
        {
            sleep (500);
            GPIO_toggleBitValue (PERIPH_GPIO_4, PERIPH_GPIO_PIN_5);
        }
}
