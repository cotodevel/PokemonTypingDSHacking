#if (defined EUR)

static unsigned char typingMap[] __attribute__((aligned(16))) = {
	0x08, 0x00, 0x2a, 0x00, 0x09, 0x00, 0x2b, 0x00, 0x0d, 0x00, 0x28, 0x00, 0x20, 0x00, 0x2c, 0x00, 
	0x21, 0x00, 0x1e, 0x00, 0x22, 0x00, 0x34, 0x00, 0x23, 0x00, 0x32, 0x00, 0x24, 0x00, 0x21, 0x00, 
	0x25, 0x00, 0x22, 0x00, 0x26, 0x00, 0x24, 0x00, 0x27, 0x00, 0x34, 0x00, 0x28, 0x00, 0x26, 0x00, 
	0x29, 0x00, 0x27, 0x00, 0x2a, 0x00, 0x25, 0x00, 0x2b, 0x00, 0x2e, 0x00, 0x2c, 0x00, 0x36, 0x00, 
	0x2d, 0x00, 0x2d, 0x00, 0x2e, 0x00, 0x37, 0x00, 0x2f, 0x00, 0x38, 0x00, 0x30, 0x00, 0x27, 0x00, 
	0x31, 0x00, 0x1e, 0x00, 0x32, 0x00, 0x1f, 0x00, 0x33, 0x00, 0x20, 0x00, 0x34, 0x00, 0x21, 0x00, 
	0x35, 0x00, 0x22, 0x00, 0x36, 0x00, 0x23, 0x00, 0x37, 0x00, 0x24, 0x00, 0x38, 0x00, 0x25, 0x00, 
	0x39, 0x00, 0x26, 0x00, 0x3a, 0x00, 0x33, 0x00, 0x3b, 0x00, 0x33, 0x00, 0x3c, 0x00, 0x36, 0x00, 
	0x3d, 0x00, 0x2e, 0x00, 0x3e, 0x00, 0x37, 0x00, 0x3f, 0x00, 0x38, 0x00, 0x40, 0x00, 0x1f, 0x00, 
	0x41, 0x00, 0x04, 0x00, 0x42, 0x00, 0x05, 0x00, 0x43, 0x00, 0x06, 0x00, 0x44, 0x00, 0x07, 0x00, 
	0x45, 0x00, 0x08, 0x00, 0x46, 0x00, 0x09, 0x00, 0x47, 0x00, 0x0a, 0x00, 0x48, 0x00, 0x0b, 0x00, 
	0x49, 0x00, 0x0c, 0x00, 0x4a, 0x00, 0x0d, 0x00, 0x4b, 0x00, 0x0e, 0x00, 0x4c, 0x00, 0x0f, 0x00, 
	0x4d, 0x00, 0x10, 0x00, 0x4e, 0x00, 0x11, 0x00, 0x4f, 0x00, 0x12, 0x00, 0x50, 0x00, 0x13, 0x00, 
	0x51, 0x00, 0x14, 0x00, 0x52, 0x00, 0x15, 0x00, 0x53, 0x00, 0x16, 0x00, 0x54, 0x00, 0x17, 0x00, 
	0x55, 0x00, 0x18, 0x00, 0x56, 0x00, 0x19, 0x00, 0x57, 0x00, 0x1a, 0x00, 0x58, 0x00, 0x1b, 0x00, 
	0x59, 0x00, 0x1c, 0x00, 0x5a, 0x00, 0x1d, 0x00, 0x5b, 0x00, 0x2f, 0x00, 0x5c, 0x00, 0x64, 0x00, 
	0x5d, 0x00, 0x30, 0x00, 0x5e, 0x00, 0x23, 0x00, 0x5f, 0x00, 0x2d, 0x00, 0x60, 0x00, 0x35, 0x00, 
	0x61, 0x00, 0x04, 0x00, 0x62, 0x00, 0x05, 0x00, 0x63, 0x00, 0x06, 0x00, 0x64, 0x00, 0x07, 0x00, 
	0x65, 0x00, 0x08, 0x00, 0x66, 0x00, 0x09, 0x00, 0x67, 0x00, 0x0a, 0x00, 0x68, 0x00, 0x0b, 0x00, 
	0x69, 0x00, 0x0c, 0x00, 0x6a, 0x00, 0x0d, 0x00, 0x6b, 0x00, 0x0e, 0x00, 0x6c, 0x00, 0x0f, 0x00, 
	0x6d, 0x00, 0x10, 0x00, 0x6e, 0x00, 0x11, 0x00, 0x6f, 0x00, 0x12, 0x00, 0x70, 0x00, 0x13, 0x00, 
	0x71, 0x00, 0x14, 0x00, 0x72, 0x00, 0x15, 0x00, 0x73, 0x00, 0x16, 0x00, 0x74, 0x00, 0x17, 0x00, 
	0x75, 0x00, 0x18, 0x00, 0x76, 0x00, 0x19, 0x00, 0x77, 0x00, 0x1a, 0x00, 0x78, 0x00, 0x1b, 0x00, 
	0x79, 0x00, 0x1c, 0x00, 0x7a, 0x00, 0x1d, 0x00, 0x7b, 0x00, 0x2f, 0x00, 0x7c, 0x00, 0x64, 0x00, 
	0x7d, 0x00, 0x30, 0x00, 0x7e, 0x00, 0x32, 0x00, 0xa3, 0x00, 0x20, 0x00, 0xac, 0x20, 0x08, 0x00, 
	0x48, 0xe0, 0x52, 0x00, 0x4b, 0xe0, 0x50, 0x00, 0x4d, 0xe0, 0x4f, 0x00, 0x50, 0xe0, 0x51, 0x00, 
	0x00, 0xff, 0x72, 0x00, 0x01, 0xff, 0x71, 0x00, 0x02, 0xff, 0x70, 0x00, 0x04, 0xff, 0x73, 0x00, 
	0x06, 0xff, 0x39, 0x00, 0x07, 0xff, 0x75, 0x00, 0x08, 0xff, 0x74, 0x00, 0x0b, 0xff, 0x76, 0x00, 
};

#elif (defined FRA)

static unsigned char typingMap[] __attribute__((aligned(16))) = {
	0x08, 0x00, 0x2a, 0x00, 0x09, 0x00, 0x2b, 0x00, 0x0d, 0x00, 0x28, 0x00, 0x20, 0x00, 0x2c, 0x00, 
	0x21, 0x00, 0x38, 0x00, 0x22, 0x00, 0x20, 0x00, 0x23, 0x00, 0x20, 0x00, 0x24, 0x00, 0x30, 0x00, 
	0x25, 0x00, 0x34, 0x00, 0x26, 0x00, 0x1e, 0x00, 0x27, 0x00, 0x21, 0x00, 0x28, 0x00, 0x22, 0x00, 
	0x29, 0x00, 0x2d, 0x00, 0x2a, 0x00, 0x32, 0x00, 0x2b, 0x00, 0x2e, 0x00, 0x2c, 0x00, 0x10, 0x00, 
	0x2d, 0x00, 0x23, 0x00, 0x2e, 0x00, 0x36, 0x00, 0x2f, 0x00, 0x37, 0x00, 0x30, 0x00, 0x27, 0x00, 
	0x31, 0x00, 0x1e, 0x00, 0x32, 0x00, 0x1f, 0x00, 0x33, 0x00, 0x20, 0x00, 0x34, 0x00, 0x21, 0x00, 
	0x35, 0x00, 0x22, 0x00, 0x36, 0x00, 0x23, 0x00, 0x37, 0x00, 0x24, 0x00, 0x38, 0x00, 0x25, 0x00, 
	0x39, 0x00, 0x26, 0x00, 0x3a, 0x00, 0x37, 0x00, 0x3b, 0x00, 0x36, 0x00, 0x3c, 0x00, 0x64, 0x00, 
	0x3d, 0x00, 0x2e, 0x00, 0x3e, 0x00, 0x64, 0x00, 0x3f, 0x00, 0x10, 0x00, 0x40, 0x00, 0x27, 0x00, 
	0x41, 0x00, 0x14, 0x00, 0x42, 0x00, 0x05, 0x00, 0x43, 0x00, 0x06, 0x00, 0x44, 0x00, 0x07, 0x00, 
	0x45, 0x00, 0x08, 0x00, 0x46, 0x00, 0x09, 0x00, 0x47, 0x00, 0x0a, 0x00, 0x48, 0x00, 0x0b, 0x00, 
	0x49, 0x00, 0x0c, 0x00, 0x4a, 0x00, 0x0d, 0x00, 0x4b, 0x00, 0x0e, 0x00, 0x4c, 0x00, 0x0f, 0x00, 
	0x4d, 0x00, 0x33, 0x00, 0x4e, 0x00, 0x11, 0x00, 0x4f, 0x00, 0x12, 0x00, 0x50, 0x00, 0x13, 0x00, 
	0x51, 0x00, 0x04, 0x00, 0x52, 0x00, 0x15, 0x00, 0x53, 0x00, 0x16, 0x00, 0x54, 0x00, 0x17, 0x00, 
	0x55, 0x00, 0x18, 0x00, 0x56, 0x00, 0x19, 0x00, 0x57, 0x00, 0x1d, 0x00, 0x58, 0x00, 0x1b, 0x00, 
	0x59, 0x00, 0x1c, 0x00, 0x5a, 0x00, 0x1a, 0x00, 0x5b, 0x00, 0x22, 0x00, 0x5c, 0x00, 0x25, 0x00, 
	0x5d, 0x00, 0x2d, 0x00, 0x5e, 0x00, 0x26, 0x00, 0x5f, 0x00, 0x25, 0x00, 0x60, 0x00, 0x24, 0x00, 
	0x61, 0x00, 0x14, 0x00, 0x62, 0x00, 0x05, 0x00, 0x63, 0x00, 0x06, 0x00, 0x64, 0x00, 0x07, 0x00, 
	0x65, 0x00, 0x08, 0x00, 0x66, 0x00, 0x09, 0x00, 0x67, 0x00, 0x0a, 0x00, 0x68, 0x00, 0x0b, 0x00, 
	0x69, 0x00, 0x0c, 0x00, 0x6a, 0x00, 0x0d, 0x00, 0x6b, 0x00, 0x0e, 0x00, 0x6c, 0x00, 0x0f, 0x00, 
	0x6d, 0x00, 0x33, 0x00, 0x6e, 0x00, 0x11, 0x00, 0x6f, 0x00, 0x12, 0x00, 0x70, 0x00, 0x13, 0x00, 
	0x71, 0x00, 0x04, 0x00, 0x72, 0x00, 0x15, 0x00, 0x73, 0x00, 0x16, 0x00, 0x74, 0x00, 0x17, 0x00, 
	0x75, 0x00, 0x18, 0x00, 0x76, 0x00, 0x19, 0x00, 0x77, 0x00, 0x1d, 0x00, 0x78, 0x00, 0x1b, 0x00, 
	0x79, 0x00, 0x1c, 0x00, 0x7a, 0x00, 0x1a, 0x00, 0x7b, 0x00, 0x21, 0x00, 0x7c, 0x00, 0x23, 0x00, 
	0x7d, 0x00, 0x2e, 0x00, 0x7e, 0x00, 0x1f, 0x00, 0xa3, 0x00, 0x30, 0x00, 0xa4, 0x00, 0x30, 0x00, 
	0xa7, 0x00, 0x38, 0x00, 0xa8, 0x00, 0x2f, 0x00, 0xb0, 0x00, 0x2d, 0x00, 0xb2, 0x00, 0x35, 0x00, 
	0xb5, 0x00, 0x32, 0x00, 0xc7, 0x00, 0x26, 0x00, 0xe0, 0x00, 0x27, 0x00, 0xe8, 0x00, 0x24, 0x00, 
	0xe9, 0x00, 0x1f, 0x00, 0xf9, 0x00, 0x34, 0x00, 0xac, 0x20, 0x08, 0x00, 0x48, 0xe0, 0x52, 0x00, 
	0x4b, 0xe0, 0x50, 0x00, 0x4d, 0xe0, 0x4f, 0x00, 0x50, 0xe0, 0x51, 0x00, 0x00, 0xff, 0x72, 0x00, 
	0x01, 0xff, 0x71, 0x00, 0x02, 0xff, 0x70, 0x00, 0x04, 0xff, 0x73, 0x00, 0x06, 0xff, 0x39, 0x00, 
	0x07, 0xff, 0x75, 0x00, 0x08, 0xff, 0x74, 0x00, 0x0b, 0xff, 0x76, 0x00, 
};

#elif (defined GER)

static unsigned char typingMap[] __attribute__((aligned(16))) = {
	0x08, 0x00, 0x2a, 0x00, 0x09, 0x00, 0x2b, 0x00, 0x0d, 0x00, 0x28, 0x00, 0x20, 0x00, 0x2c, 0x00, 
	0x21, 0x00, 0x1e, 0x00, 0x22, 0x00, 0x1f, 0x00, 0x23, 0x00, 0x32, 0x00, 0x24, 0x00, 0x21, 0x00, 
	0x25, 0x00, 0x22, 0x00, 0x26, 0x00, 0x23, 0x00, 0x27, 0x00, 0x32, 0x00, 0x28, 0x00, 0x25, 0x00, 
	0x29, 0x00, 0x26, 0x00, 0x2a, 0x00, 0x30, 0x00, 0x2b, 0x00, 0x30, 0x00, 0x2c, 0x00, 0x36, 0x00, 
	0x2d, 0x00, 0x38, 0x00, 0x2e, 0x00, 0x37, 0x00, 0x2f, 0x00, 0x24, 0x00, 0x30, 0x00, 0x27, 0x00, 
	0x31, 0x00, 0x1e, 0x00, 0x32, 0x00, 0x1f, 0x00, 0x33, 0x00, 0x20, 0x00, 0x34, 0x00, 0x21, 0x00, 
	0x35, 0x00, 0x22, 0x00, 0x36, 0x00, 0x23, 0x00, 0x37, 0x00, 0x24, 0x00, 0x38, 0x00, 0x25, 0x00, 
	0x39, 0x00, 0x26, 0x00, 0x3a, 0x00, 0x37, 0x00, 0x3b, 0x00, 0x36, 0x00, 0x3c, 0x00, 0x64, 0x00, 
	0x3d, 0x00, 0x27, 0x00, 0x3e, 0x00, 0x64, 0x00, 0x3f, 0x00, 0x2d, 0x00, 0x40, 0x00, 0x14, 0x00, 
	0x41, 0x00, 0x04, 0x00, 0x42, 0x00, 0x05, 0x00, 0x43, 0x00, 0x06, 0x00, 0x44, 0x00, 0x07, 0x00, 
	0x45, 0x00, 0x08, 0x00, 0x46, 0x00, 0x09, 0x00, 0x47, 0x00, 0x0a, 0x00, 0x48, 0x00, 0x0b, 0x00, 
	0x49, 0x00, 0x0c, 0x00, 0x4a, 0x00, 0x0d, 0x00, 0x4b, 0x00, 0x0e, 0x00, 0x4c, 0x00, 0x0f, 0x00, 
	0x4d, 0x00, 0x10, 0x00, 0x4e, 0x00, 0x11, 0x00, 0x4f, 0x00, 0x12, 0x00, 0x50, 0x00, 0x13, 0x00, 
	0x51, 0x00, 0x14, 0x00, 0x52, 0x00, 0x15, 0x00, 0x53, 0x00, 0x16, 0x00, 0x54, 0x00, 0x17, 0x00, 
	0x55, 0x00, 0x18, 0x00, 0x56, 0x00, 0x19, 0x00, 0x57, 0x00, 0x1a, 0x00, 0x58, 0x00, 0x1b, 0x00, 
	0x59, 0x00, 0x1d, 0x00, 0x5a, 0x00, 0x1c, 0x00, 0x5b, 0x00, 0x25, 0x00, 0x5c, 0x00, 0x2d, 0x00, 
	0x5d, 0x00, 0x26, 0x00, 0x5e, 0x00, 0x35, 0x00, 0x5f, 0x00, 0x38, 0x00, 0x60, 0x00, 0x2e, 0x00, 
	0x61, 0x00, 0x04, 0x00, 0x62, 0x00, 0x05, 0x00, 0x63, 0x00, 0x06, 0x00, 0x64, 0x00, 0x07, 0x00, 
	0x65, 0x00, 0x08, 0x00, 0x66, 0x00, 0x09, 0x00, 0x67, 0x00, 0x0a, 0x00, 0x68, 0x00, 0x0b, 0x00, 
	0x69, 0x00, 0x0c, 0x00, 0x6a, 0x00, 0x0d, 0x00, 0x6b, 0x00, 0x0e, 0x00, 0x6c, 0x00, 0x0f, 0x00, 
	0x6d, 0x00, 0x10, 0x00, 0x6e, 0x00, 0x11, 0x00, 0x6f, 0x00, 0x12, 0x00, 0x70, 0x00, 0x13, 0x00, 
	0x71, 0x00, 0x14, 0x00, 0x72, 0x00, 0x15, 0x00, 0x73, 0x00, 0x16, 0x00, 0x74, 0x00, 0x17, 0x00, 
	0x75, 0x00, 0x18, 0x00, 0x76, 0x00, 0x19, 0x00, 0x77, 0x00, 0x1a, 0x00, 0x78, 0x00, 0x1b, 0x00, 
	0x79, 0x00, 0x1d, 0x00, 0x7a, 0x00, 0x1c, 0x00, 0x7b, 0x00, 0x24, 0x00, 0x7c, 0x00, 0x64, 0x00, 
	0x7d, 0x00, 0x27, 0x00, 0x7e, 0x00, 0x30, 0x00, 0xa7, 0x00, 0x20, 0x00, 0xb0, 0x00, 0x35, 0x00, 
	0xb2, 0x00, 0x1f, 0x00, 0xb3, 0x00, 0x20, 0x00, 0xb4, 0x00, 0x2e, 0x00, 0xb5, 0x00, 0x10, 0x00, 
	0xc4, 0x00, 0x34, 0x00, 0xd6, 0x00, 0x33, 0x00, 0xdc, 0x00, 0x2f, 0x00, 0xdf, 0x00, 0x2d, 0x00, 
	0xe4, 0x00, 0x34, 0x00, 0xf6, 0x00, 0x33, 0x00, 0xfc, 0x00, 0x2f, 0x00, 0xac, 0x20, 0x08, 0x00, 
	0x48, 0xe0, 0x52, 0x00, 0x4b, 0xe0, 0x50, 0x00, 0x4d, 0xe0, 0x4f, 0x00, 0x50, 0xe0, 0x51, 0x00, 
	0x00, 0xff, 0x72, 0x00, 0x01, 0xff, 0x71, 0x00, 0x02, 0xff, 0x70, 0x00, 0x04, 0xff, 0x73, 0x00, 
	0x06, 0xff, 0x39, 0x00, 0x07, 0xff, 0x75, 0x00, 0x08, 0xff, 0x74, 0x00, 0x0b, 0xff, 0x76, 0x00, 
};

#elif (defined ITA)

static unsigned char typingMap[] __attribute__((aligned(16))) = {
	0x08, 0x00, 0x2a, 0x00, 0x09, 0x00, 0x2b, 0x00, 0x0d, 0x00, 0x28, 0x00, 0x20, 0x00, 0x2c, 0x00, 
	0x21, 0x00, 0x1e, 0x00, 0x22, 0x00, 0x1f, 0x00, 0x23, 0x00, 0x34, 0x00, 0x24, 0x00, 0x21, 0x00, 
	0x25, 0x00, 0x22, 0x00, 0x26, 0x00, 0x23, 0x00, 0x27, 0x00, 0x2d, 0x00, 0x28, 0x00, 0x25, 0x00, 
	0x29, 0x00, 0x26, 0x00, 0x2a, 0x00, 0x30, 0x00, 0x2b, 0x00, 0x30, 0x00, 0x2c, 0x00, 0x36, 0x00, 
	0x2d, 0x00, 0x38, 0x00, 0x2e, 0x00, 0x37, 0x00, 0x2f, 0x00, 0x24, 0x00, 0x30, 0x00, 0x27, 0x00, 
	0x31, 0x00, 0x1e, 0x00, 0x32, 0x00, 0x1f, 0x00, 0x33, 0x00, 0x20, 0x00, 0x34, 0x00, 0x21, 0x00, 
	0x35, 0x00, 0x22, 0x00, 0x36, 0x00, 0x23, 0x00, 0x37, 0x00, 0x24, 0x00, 0x38, 0x00, 0x25, 0x00, 
	0x39, 0x00, 0x26, 0x00, 0x3a, 0x00, 0x37, 0x00, 0x3b, 0x00, 0x36, 0x00, 0x3c, 0x00, 0x64, 0x00, 
	0x3d, 0x00, 0x27, 0x00, 0x3e, 0x00, 0x64, 0x00, 0x3f, 0x00, 0x2d, 0x00, 0x40, 0x00, 0x33, 0x00, 
	0x41, 0x00, 0x04, 0x00, 0x42, 0x00, 0x05, 0x00, 0x43, 0x00, 0x06, 0x00, 0x44, 0x00, 0x07, 0x00, 
	0x45, 0x00, 0x08, 0x00, 0x46, 0x00, 0x09, 0x00, 0x47, 0x00, 0x0a, 0x00, 0x48, 0x00, 0x0b, 0x00, 
	0x49, 0x00, 0x0c, 0x00, 0x4a, 0x00, 0x0d, 0x00, 0x4b, 0x00, 0x0e, 0x00, 0x4c, 0x00, 0x0f, 0x00, 
	0x4d, 0x00, 0x10, 0x00, 0x4e, 0x00, 0x11, 0x00, 0x4f, 0x00, 0x12, 0x00, 0x50, 0x00, 0x13, 0x00, 
	0x51, 0x00, 0x14, 0x00, 0x52, 0x00, 0x15, 0x00, 0x53, 0x00, 0x16, 0x00, 0x54, 0x00, 0x17, 0x00, 
	0x55, 0x00, 0x18, 0x00, 0x56, 0x00, 0x19, 0x00, 0x57, 0x00, 0x1a, 0x00, 0x58, 0x00, 0x1b, 0x00, 
	0x59, 0x00, 0x1c, 0x00, 0x5a, 0x00, 0x1d, 0x00, 0x5b, 0x00, 0x2f, 0x00, 0x5c, 0x00, 0x35, 0x00, 
	0x5d, 0x00, 0x30, 0x00, 0x5e, 0x00, 0x2e, 0x00, 0x5f, 0x00, 0x38, 0x00, 0x61, 0x00, 0x04, 0x00, 
	0x62, 0x00, 0x05, 0x00, 0x63, 0x00, 0x06, 0x00, 0x64, 0x00, 0x07, 0x00, 0x65, 0x00, 0x08, 0x00, 
	0x66, 0x00, 0x09, 0x00, 0x67, 0x00, 0x0a, 0x00, 0x68, 0x00, 0x0b, 0x00, 0x69, 0x00, 0x0c, 0x00, 
	0x6a, 0x00, 0x0d, 0x00, 0x6b, 0x00, 0x0e, 0x00, 0x6c, 0x00, 0x0f, 0x00, 0x6d, 0x00, 0x10, 0x00, 
	0x6e, 0x00, 0x11, 0x00, 0x6f, 0x00, 0x12, 0x00, 0x70, 0x00, 0x13, 0x00, 0x71, 0x00, 0x14, 0x00, 
	0x72, 0x00, 0x15, 0x00, 0x73, 0x00, 0x16, 0x00, 0x74, 0x00, 0x17, 0x00, 0x75, 0x00, 0x18, 0x00, 
	0x76, 0x00, 0x19, 0x00, 0x77, 0x00, 0x1a, 0x00, 0x78, 0x00, 0x1b, 0x00, 0x79, 0x00, 0x1c, 0x00, 
	0x7a, 0x00, 0x1d, 0x00, 0x7b, 0x00, 0x2f, 0x00, 0x7c, 0x00, 0x35, 0x00, 0x7d, 0x00, 0x30, 0x00, 
	0xa3, 0x00, 0x20, 0x00, 0xa7, 0x00, 0x32, 0x00, 0xb0, 0x00, 0x34, 0x00, 0xc7, 0x00, 0x33, 0x00, 
	0xe0, 0x00, 0x34, 0x00, 0xe8, 0x00, 0x2f, 0x00, 0xe9, 0x00, 0x2f, 0x00, 0xec, 0x00, 0x2e, 0x00, 
	0xf2, 0x00, 0x33, 0x00, 0xf9, 0x00, 0x32, 0x00, 0xac, 0x20, 0x08, 0x00, 0x48, 0xe0, 0x52, 0x00, 
	0x4b, 0xe0, 0x50, 0x00, 0x4d, 0xe0, 0x4f, 0x00, 0x50, 0xe0, 0x51, 0x00, 0x00, 0xff, 0x72, 0x00, 
	0x01, 0xff, 0x71, 0x00, 0x02, 0xff, 0x70, 0x00, 0x04, 0xff, 0x73, 0x00, 0x06, 0xff, 0x39, 0x00, 
	0x07, 0xff, 0x75, 0x00, 0x08, 0xff, 0x74, 0x00, 0x0b, 0xff, 0x76, 0x00, 
};

#elif (defined SPA)

static unsigned char typingMap[] __attribute__((aligned(16))) = {
	0x08, 0x00, 0x2a, 0x00, 0x09, 0x00, 0x2b, 0x00, 0x0d, 0x00, 0x28, 0x00, 0x20, 0x00, 0x2c, 0x00, 
	0x21, 0x00, 0x1e, 0x00, 0x22, 0x00, 0x1f, 0x00, 0x23, 0x00, 0x20, 0x00, 0x24, 0x00, 0x21, 0x00, 
	0x25, 0x00, 0x22, 0x00, 0x26, 0x00, 0x23, 0x00, 0x27, 0x00, 0x2d, 0x00, 0x28, 0x00, 0x25, 0x00, 
	0x29, 0x00, 0x26, 0x00, 0x2a, 0x00, 0x30, 0x00, 0x2b, 0x00, 0x30, 0x00, 0x2c, 0x00, 0x36, 0x00, 
	0x2d, 0x00, 0x38, 0x00, 0x2e, 0x00, 0x37, 0x00, 0x2f, 0x00, 0x24, 0x00, 0x30, 0x00, 0x27, 0x00, 
	0x31, 0x00, 0x1e, 0x00, 0x32, 0x00, 0x1f, 0x00, 0x33, 0x00, 0x20, 0x00, 0x34, 0x00, 0x21, 0x00, 
	0x35, 0x00, 0x22, 0x00, 0x36, 0x00, 0x23, 0x00, 0x37, 0x00, 0x24, 0x00, 0x38, 0x00, 0x25, 0x00, 
	0x39, 0x00, 0x26, 0x00, 0x3a, 0x00, 0x37, 0x00, 0x3b, 0x00, 0x36, 0x00, 0x3c, 0x00, 0x64, 0x00, 
	0x3d, 0x00, 0x27, 0x00, 0x3e, 0x00, 0x64, 0x00, 0x3f, 0x00, 0x2d, 0x00, 0x40, 0x00, 0x1f, 0x00, 
	0x41, 0x00, 0x04, 0x00, 0x42, 0x00, 0x05, 0x00, 0x43, 0x00, 0x06, 0x00, 0x44, 0x00, 0x07, 0x00, 
	0x45, 0x00, 0x08, 0x00, 0x46, 0x00, 0x09, 0x00, 0x47, 0x00, 0x0a, 0x00, 0x48, 0x00, 0x0b, 0x00, 
	0x49, 0x00, 0x0c, 0x00, 0x4a, 0x00, 0x0d, 0x00, 0x4b, 0x00, 0x0e, 0x00, 0x4c, 0x00, 0x0f, 0x00, 
	0x4d, 0x00, 0x10, 0x00, 0x4e, 0x00, 0x11, 0x00, 0x4f, 0x00, 0x12, 0x00, 0x50, 0x00, 0x13, 0x00, 
	0x51, 0x00, 0x14, 0x00, 0x52, 0x00, 0x15, 0x00, 0x53, 0x00, 0x16, 0x00, 0x54, 0x00, 0x17, 0x00, 
	0x55, 0x00, 0x18, 0x00, 0x56, 0x00, 0x19, 0x00, 0x57, 0x00, 0x1a, 0x00, 0x58, 0x00, 0x1b, 0x00, 
	0x59, 0x00, 0x1c, 0x00, 0x5a, 0x00, 0x1d, 0x00, 0x5b, 0x00, 0x2f, 0x00, 0x5c, 0x00, 0x35, 0x00, 
	0x5d, 0x00, 0x30, 0x00, 0x5e, 0x00, 0x2f, 0x00, 0x5f, 0x00, 0x38, 0x00, 0x60, 0x00, 0x2f, 0x00, 
	0x61, 0x00, 0x04, 0x00, 0x62, 0x00, 0x05, 0x00, 0x63, 0x00, 0x06, 0x00, 0x64, 0x00, 0x07, 0x00, 
	0x65, 0x00, 0x08, 0x00, 0x66, 0x00, 0x09, 0x00, 0x67, 0x00, 0x0a, 0x00, 0x68, 0x00, 0x0b, 0x00, 
	0x69, 0x00, 0x0c, 0x00, 0x6a, 0x00, 0x0d, 0x00, 0x6b, 0x00, 0x0e, 0x00, 0x6c, 0x00, 0x0f, 0x00, 
	0x6d, 0x00, 0x10, 0x00, 0x6e, 0x00, 0x11, 0x00, 0x6f, 0x00, 0x12, 0x00, 0x70, 0x00, 0x13, 0x00, 
	0x71, 0x00, 0x14, 0x00, 0x72, 0x00, 0x15, 0x00, 0x73, 0x00, 0x16, 0x00, 0x74, 0x00, 0x17, 0x00, 
	0x75, 0x00, 0x18, 0x00, 0x76, 0x00, 0x19, 0x00, 0x77, 0x00, 0x1a, 0x00, 0x78, 0x00, 0x1b, 0x00, 
	0x79, 0x00, 0x1c, 0x00, 0x7a, 0x00, 0x1d, 0x00, 0x7b, 0x00, 0x34, 0x00, 0x7c, 0x00, 0x1e, 0x00, 
	0x7d, 0x00, 0x32, 0x00, 0x7e, 0x00, 0x21, 0x00, 0xa1, 0x00, 0x2e, 0x00, 0xa8, 0x00, 0x34, 0x00, 
	0xaa, 0x00, 0x35, 0x00, 0xac, 0x00, 0x23, 0x00, 0xb0, 0x00, 0x35, 0x00, 0xb4, 0x00, 0x34, 0x00, 
	0xb7, 0x00, 0x20, 0x00, 0xbf, 0x00, 0x2e, 0x00, 0xc7, 0x00, 0x32, 0x00, 0xd1, 0x00, 0x33, 0x00, 
	0xe7, 0x00, 0x32, 0x00, 0xf1, 0x00, 0x33, 0x00, 0xac, 0x20, 0x08, 0x00, 0x48, 0xe0, 0x52, 0x00, 
	0x4b, 0xe0, 0x50, 0x00, 0x4d, 0xe0, 0x4f, 0x00, 0x50, 0xe0, 0x51, 0x00, 0x00, 0xff, 0x72, 0x00, 
	0x01, 0xff, 0x71, 0x00, 0x02, 0xff, 0x70, 0x00, 0x04, 0xff, 0x73, 0x00, 0x06, 0xff, 0x39, 0x00, 
	0x07, 0xff, 0x75, 0x00, 0x08, 0xff, 0x74, 0x00, 0x0b, 0xff, 0x76, 0x00, 
};

#else
static unsigned char typingMap[] __attribute__((aligned(16))) = {
	0x00, 0x00, 0x00, 0x00,
};

#endif