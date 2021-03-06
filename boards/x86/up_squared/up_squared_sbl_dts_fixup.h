/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Board level DTS fixup file */

#define DT_UART_NS16550_PORT_0_BASE_ADDR	DT_NS16550_81434000_BASE_ADDRESS
#define CONFIG_UART_NS16550_PORT_0_BAUD_RATE	DT_NS16550_81434000_CURRENT_SPEED
#define CONFIG_UART_NS16550_PORT_0_NAME		DT_NS16550_81434000_LABEL
#define DT_UART_NS16550_PORT_0_IRQ		DT_NS16550_81434000_IRQ_0
#define CONFIG_UART_NS16550_PORT_0_IRQ_PRI	DT_NS16550_81434000_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_0_IRQ_FLAGS	DT_NS16550_81434000_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_0_CLK_FREQ	DT_NS16550_81434000_CLOCK_FREQUENCY

#define DT_UART_NS16550_PORT_1_BASE_ADDR	DT_NS16550_81432000_BASE_ADDRESS
#define CONFIG_UART_NS16550_PORT_1_BAUD_RATE	DT_NS16550_81432000_CURRENT_SPEED
#define CONFIG_UART_NS16550_PORT_1_NAME		DT_NS16550_81432000_LABEL
#define DT_UART_NS16550_PORT_1_IRQ		DT_NS16550_81432000_IRQ_0
#define CONFIG_UART_NS16550_PORT_1_IRQ_PRI	DT_NS16550_81432000_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_1_IRQ_FLAGS	DT_NS16550_81432000_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_1_CLK_FREQ	DT_NS16550_81432000_CLOCK_FREQUENCY

#define CONFIG_I2C_0_NAME			DT_SNPS_DESIGNWARE_I2C_81444000_LABEL
#define DT_I2C_0_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_81444000_BASE_ADDRESS
#define DT_I2C_0_IRQ			DT_SNPS_DESIGNWARE_I2C_81444000_IRQ_0
#define DT_I2C_0_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_81444000_IRQ_0_PRIORITY
#define DT_I2C_0_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_81444000_IRQ_0_SENSE
#define DT_I2C_0_BITRATE			DT_SNPS_DESIGNWARE_I2C_81444000_CLOCK_FREQUENCY

#define CONFIG_I2C_1_NAME			DT_SNPS_DESIGNWARE_I2C_81442000_LABEL
#define DT_I2C_1_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_81442000_BASE_ADDRESS
#define DT_I2C_1_IRQ			DT_SNPS_DESIGNWARE_I2C_81442000_IRQ_0
#define DT_I2C_1_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_81442000_IRQ_0_PRIORITY
#define DT_I2C_1_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_81442000_IRQ_0_SENSE
#define DT_I2C_1_BITRATE			DT_SNPS_DESIGNWARE_I2C_81442000_CLOCK_FREQUENCY

#define CONFIG_I2C_2_NAME			DT_SNPS_DESIGNWARE_I2C_81440000_LABEL
#define DT_I2C_2_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_81440000_BASE_ADDRESS
#define DT_I2C_2_IRQ			DT_SNPS_DESIGNWARE_I2C_81440000_IRQ_0
#define DT_I2C_2_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_81440000_IRQ_0_PRIORITY
#define DT_I2C_2_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_81440000_IRQ_0_SENSE
#define DT_I2C_2_BITRATE			DT_SNPS_DESIGNWARE_I2C_81440000_CLOCK_FREQUENCY

#define CONFIG_I2C_3_NAME			DT_SNPS_DESIGNWARE_I2C_8143E000_LABEL
#define DT_I2C_3_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_8143E000_BASE_ADDRESS
#define DT_I2C_3_IRQ			DT_SNPS_DESIGNWARE_I2C_8143E000_IRQ_0
#define DT_I2C_3_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_8143E000_IRQ_0_PRIORITY
#define DT_I2C_3_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_8143E000_IRQ_0_SENSE
#define DT_I2C_3_BITRATE			DT_SNPS_DESIGNWARE_I2C_8143E000_CLOCK_FREQUENCY

#define CONFIG_I2C_4_NAME			DT_SNPS_DESIGNWARE_I2C_8143C000_LABEL
#define DT_I2C_4_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_8143C000_BASE_ADDRESS
#define DT_I2C_4_IRQ			DT_SNPS_DESIGNWARE_I2C_8143C000_IRQ_0
#define DT_I2C_4_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_8143C000_IRQ_0_PRIORITY
#define DT_I2C_4_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_8143C000_IRQ_0_SENSE
#define DT_I2C_4_BITRATE			DT_SNPS_DESIGNWARE_I2C_8143C000_CLOCK_FREQUENCY

#define CONFIG_I2C_5_NAME			DT_SNPS_DESIGNWARE_I2C_8143A000_LABEL
#define DT_I2C_5_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_8143A000_BASE_ADDRESS
#define DT_I2C_5_IRQ			DT_SNPS_DESIGNWARE_I2C_8143A000_IRQ_0
#define DT_I2C_5_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_8143A000_IRQ_0_PRIORITY
#define DT_I2C_5_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_8143A000_IRQ_0_SENSE
#define DT_I2C_5_BITRATE			DT_SNPS_DESIGNWARE_I2C_8143A000_CLOCK_FREQUENCY

#define CONFIG_I2C_6_NAME			DT_SNPS_DESIGNWARE_I2C_81438000_LABEL
#define DT_I2C_6_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_81438000_BASE_ADDRESS
#define DT_I2C_6_IRQ			DT_SNPS_DESIGNWARE_I2C_81438000_IRQ_0
#define DT_I2C_6_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_81438000_IRQ_0_PRIORITY
#define DT_I2C_6_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_81438000_IRQ_0_SENSE
#define DT_I2C_6_BITRATE			DT_SNPS_DESIGNWARE_I2C_81438000_CLOCK_FREQUENCY

#define CONFIG_I2C_7_NAME			DT_SNPS_DESIGNWARE_I2C_81436000_LABEL
#define DT_I2C_7_BASE_ADDR			DT_SNPS_DESIGNWARE_I2C_81436000_BASE_ADDRESS
#define DT_I2C_7_IRQ			DT_SNPS_DESIGNWARE_I2C_81436000_IRQ_0
#define DT_I2C_7_IRQ_PRI			DT_SNPS_DESIGNWARE_I2C_81436000_IRQ_0_PRIORITY
#define DT_I2C_7_IRQ_FLAGS			DT_SNPS_DESIGNWARE_I2C_81436000_IRQ_0_SENSE
#define DT_I2C_7_BITRATE			DT_SNPS_DESIGNWARE_I2C_81436000_CLOCK_FREQUENCY

/* End of Board Level DTS fixup file */
