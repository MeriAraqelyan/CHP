int main(){
	uint32_t table[256];
	crc32::generate_table(table);

	// Struct, for piece-by-piece, bytewise
	struct DataStruct {
		uint16_t data1;
		uint16_t data2;
		float mypi;
		uint32_t myclock;
		bool begun;
	};

	struct DataStruct Data = {42,17,3.14,123456789,false};
	char *ptr = (char *) &Data;
	uint16_t slen = sizeof(Data);
	printf("Size of Data struct is: %u\n", slen);                 // 16 bytes

	uint32_t CRC = 0;
	for (int cnt = 0; cnt < slen; cnt++) {
		CRC = crc32::update(table, CRC, ptr, 1);
		ptr++;
	}

	printf("Piece-wise crc32 of struct Data is: 0x%X \n", CRC);       // 0x6A8E18CE

}