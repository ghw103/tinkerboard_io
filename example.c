#include "tinkerboard_io.h"

int main(int argc, const char * argv[]){

	if(tinkerboard_init() == 1){
		printf("Successfully initialized\n");
		
		
		/*
		for(uint32_t idx = 1; idx<=40; idx++){
			tinkerboard_set_gpio_mode(idx, OUTPUT);
		}*/
		
		/*
		uint8_t tx_buff[] = {0xBE, 0XEF};
		struct spi_mode_config_t mode = {
			.clk_mode = 1,
			.clk_divider = 4,
			.data_frame_size = DFS_8,
			.slave_select = SS_NONE,
			.transfer_mode = TRANSMIT_RECEIVE,
			.byte_order = MSB_FIRST,
		};
		
		tinkerboard_spi_init(SPI0, mode);
		tinkerboard_spi_transfer(SPI0, tx_buff, 2, mode);
		tinkerboard_spi_end(SPI0);*/
		
		
		/*
		while(1){
			for(uint32_t idx = 1; idx<=40; idx++){
				tinkerboard_set_gpio_state(idx, HIGH);
			}

			for(uint32_t idx = 1; idx<=40; idx++){
				tinkerboard_set_gpio_state(idx, LOW);
			}
		}*/

		tinkerboard_end();
	}
}
