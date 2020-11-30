#include "led.h"

void led_init(void)
{
	nrf_gpio_cfg_output(LED);
}

void led_on(void)
{
	nrf_gpio_pin_clear(LED);
}

void led_off(void)
{
	nrf_gpio_pin_set(LED);
}

void led_reversal(void)
{
	nrf_gpio_pin_toggle(LED);
}
