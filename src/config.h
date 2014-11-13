/*
 * This file is part of the Paparazzi UAV project.
 *
 * Copyright (C) 2010 Gareth McMullin <gareth@blacksphere.co.nz>
 * Copyright (C) 2011-2014 Piotr Esden-Tempski <piotr@esden.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONFIG_H
#define CONFIG_H

#ifndef COMPANY_NAME
#define COMPANY_NAME    "1 BIT SQUARED"
#endif

#ifndef DEVICE_NAME
#define DEVICE_NAME     "Lisa/M V2.1"
#endif

#ifndef VERSION
#define VERSION         ""
#endif

#ifndef DEV_SERIAL
#define DEV_SERIAL      "NSERIAL"
#endif

/* Bootloader running indicator led config. */
#define IND_LEDCOUNT 5

#define IND_LED0_CLOCK RCC_APB2ENR_IOPAEN
#define IND_LED0_BANK GPIOA
#define IND_LED0_PIN GPIO8

#define IND_LED1_CLOCK RCC_APB2ENR_IOPBEN
#define IND_LED1_BANK GPIOB
#define IND_LED1_PIN GPIO4

#define IND_LED2_CLOCK RCC_APB2ENR_IOPCEN
#define IND_LED2_BANK GPIOC
#define IND_LED2_PIN GPIO2

#define IND_LED3_CLOCK RCC_APB2ENR_IOPCEN
#define IND_LED3_BANK GPIOC
#define IND_LED3_PIN GPIO5

#define IND_LED4_CLOCK RCC_APB2ENR_IOPCEN
#define IND_LED4_BANK GPIOC
#define IND_LED4_PIN GPIO15

#define IND_LED_MAPR AFIO_MAPR_SWJ_CFG_FULL_SWJ_NO_JNTRST

#endif /* CONFIG_H */
