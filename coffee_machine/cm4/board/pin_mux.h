/*
 * Copyright 2020-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitRgbLedPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLpuartPins(void); /* Function assigned for the Cortex-M7F */

/* GPIO_AD_30 (coord K17), DISP_BL */
/* Routed pin properties */
#define BOARD_INITMIPIPANELPINS_DISP_BL_PERIPHERAL GPIO9   /*!< Peripheral name */
#define BOARD_INITMIPIPANELPINS_DISP_BL_SIGNAL     gpio_io /*!< Signal name */
#define BOARD_INITMIPIPANELPINS_DISP_BL_CHANNEL    29U     /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITMIPIPANELPINS_DISP_BL_GPIO          GPIO9       /*!< GPIO peripheral base pointer */
#define BOARD_INITMIPIPANELPINS_DISP_BL_GPIO_PIN      29U         /*!< GPIO pin number */
#define BOARD_INITMIPIPANELPINS_DISP_BL_GPIO_PIN_MASK (1U << 29U) /*!< GPIO pin mask */

/* GPIO_AD_02 (coord R13), DISP_RST */
/* Routed pin properties */
#define BOARD_INITMIPIPANELPINS_DISP_RST_PERIPHERAL GPIO9   /*!< Peripheral name */
#define BOARD_INITMIPIPANELPINS_DISP_RST_SIGNAL     gpio_io /*!< Signal name */
#define BOARD_INITMIPIPANELPINS_DISP_RST_CHANNEL    1U      /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITMIPIPANELPINS_DISP_RST_GPIO          GPIO9      /*!< GPIO peripheral base pointer */
#define BOARD_INITMIPIPANELPINS_DISP_RST_GPIO_PIN      1U         /*!< GPIO pin number */
#define BOARD_INITMIPIPANELPINS_DISP_RST_GPIO_PIN_MASK (1U << 1U) /*!< GPIO pin mask */

/* GPIO_DISP_B2_15 (coord A4), DISP_POWER */
/* Routed pin properties */
#define BOARD_INITMIPIPANELPINS_DISP_POWER_PERIPHERAL GPIO11  /*!< Peripheral name */
#define BOARD_INITMIPIPANELPINS_DISP_POWER_SIGNAL     gpio_io /*!< Signal name */
#define BOARD_INITMIPIPANELPINS_DISP_POWER_CHANNEL    16U     /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITMIPIPANELPINS_DISP_POWER_GPIO          GPIO11      /*!< GPIO peripheral base pointer */
#define BOARD_INITMIPIPANELPINS_DISP_POWER_GPIO_PIN      16U         /*!< GPIO pin number */
#define BOARD_INITMIPIPANELPINS_DISP_POWER_GPIO_PIN_MASK (1U << 16U) /*!< GPIO pin mask */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitMipiPanelPins(void); /* Function assigned for the Cortex-M7F */

/* GPIO_AD_26 (coord L14), CAMERA_PWDN */
/* Routed pin properties */
#define BOARD_INITMIPICAMERAPINS_CAMERA_PWDN_PERIPHERAL GPIO9   /*!< Peripheral name */
#define BOARD_INITMIPICAMERAPINS_CAMERA_PWDN_SIGNAL     gpio_io /*!< Signal name */
#define BOARD_INITMIPICAMERAPINS_CAMERA_PWDN_CHANNEL    25U     /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITMIPICAMERAPINS_CAMERA_PWDN_GPIO          GPIO9       /*!< GPIO peripheral base pointer */
#define BOARD_INITMIPICAMERAPINS_CAMERA_PWDN_GPIO_PIN      25U         /*!< GPIO pin number */
#define BOARD_INITMIPICAMERAPINS_CAMERA_PWDN_GPIO_PIN_MASK (1U << 25U) /*!< GPIO pin mask */

/* GPIO_DISP_B2_14 (coord A7), CAMERA_RST */
/* Routed pin properties */
#define BOARD_INITMIPICAMERAPINS_CAMERA_RST_PERIPHERAL GPIO11  /*!< Peripheral name */
#define BOARD_INITMIPICAMERAPINS_CAMERA_RST_SIGNAL     gpio_io /*!< Signal name */
#define BOARD_INITMIPICAMERAPINS_CAMERA_RST_CHANNEL    15U     /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITMIPICAMERAPINS_CAMERA_RST_GPIO          GPIO11      /*!< GPIO peripheral base pointer */
#define BOARD_INITMIPICAMERAPINS_CAMERA_RST_GPIO_PIN      15U         /*!< GPIO pin number */
#define BOARD_INITMIPICAMERAPINS_CAMERA_RST_GPIO_PIN_MASK (1U << 15U) /*!< GPIO pin mask */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitMipiCameraPins(void); /* Function assigned for the Cortex-M7F */

void BOARD_InitParallelCameraPins(void);

void BOARD_InitFlexioCameraPins(void);

void BOARD_InitPushButtonPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
