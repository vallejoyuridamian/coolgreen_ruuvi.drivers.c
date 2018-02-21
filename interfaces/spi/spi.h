/**
 *  This file contains interface to SPI platform drivers. 
 *. Implementations are decided by compiler flags
 */

#ifndef SPI_H
#define SPI_H
/**
 * @brief initialize SPI driver with default settings
 * @return 0 on success, NRF error code on error
 */
ret_code_t spi_init(void);

/**
 * @brief uninitialize SPI driver with default settings
 * @return 0 on success, NRF error code on error
 */
ret_code_t spi_uninit(void);

/**
 * @brief platform SPI write command for Bosch drivers
 */
int8_t spi_bosch_platform_write(uint8_t dev_id, uint8_t reg_addr, uint8_t *data, uint16_t len);

/**
 * @brief platform SPI read command for Bosch drivers
 */
int8_t spi_bosch_platform_read(uint8_t dev_id, uint8_t reg_addr, uint8_t *data, uint16_t len);

/**
 * @brief platform SPI read command for STM drivers
 */
int32_t spi_stm_platform_write(void* dev_id, uint8_t reg_addr, uint8_t *data, uint16_t len);

/**
 * @brief platform SPI read command for STM drivers
 */
int32_t spi_stm_platform_read(void* dev_id, uint8_t reg_addr, uint8_t *data, uint16_t len);
#endif