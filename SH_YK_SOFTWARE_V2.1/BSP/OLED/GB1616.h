// ------------------  ������ģ�����ݽṹ���� ------------------------ //
struct  typFNT_GB16                 // ������ģ���ݽṹ 
{
       unsigned char  Index[3];               // ������������	
       unsigned char   Msk[32];                        // ���������� 
};

/////////////////////////////////////////////////////////////////////////
// ������ģ��                                                          //
// ���ֿ�: ����16.dot,����ȡģ���λ,��������:�����Ҵ��ϵ���         //
/////////////////////////////////////////////////////////////////////////
 const struct  typFNT_GB16 codeGB_16[] =          // ���ݱ� 
{
 "��",0x08,0x10,0x1D,0x10,0xF0,0x90,0x10,0x90,
      0x10,0x10,0xFD,0x10,0x10,0x90,0x38,0x90,
      0x34,0x10,0x50,0x1E,0x53,0xF0,0x90,0x10,
      0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,/*"��",0*/
 "��",0x08,0x80,0x08,0x88,0x10,0x90,0x30,0xE0,
      0x51,0x80,0x96,0x84,0x10,0x84,0x10,0x7C,
      0x11,0x00,0x01,0x00,0xFF,0xFE,0x01,0x00,
      0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,/*"��",1*/
 "��",0x02,0x00,0x01,0x00,0x3F,0xFC,0x20,0x04,
      0x42,0x08,0x02,0x00,0x02,0x00,0xFF,0xFE,
      0x04,0x20,0x08,0x20,0x18,0x40,0x06,0x40,
      0x01,0x80,0x02,0x60,0x0C,0x10,0x70,0x08,/*"��",2*/
 "ȫ",0x01,0x00,0x01,0x00,0x02,0x80,0x04,0x40,
      0x08,0x20,0x10,0x10,0x2F,0xE8,0xC1,0x06,
      0x01,0x00,0x01,0x00,0x1F,0xF0,0x01,0x00,
      0x01,0x00,0x01,0x00,0x7F,0xFC,0x00,0x00,/*"ȫ",3*/
"��", 0x00,0x00,0x21,0xF0,0x11,0x10,0x11,0x10,
      0x01,0x10,0x02,0x0E,0xF4,0x00,0x13,0xF8,
      0x11,0x08,0x11,0x10,0x10,0x90,0x14,0xA0,
      0x18,0x40,0x10,0xA0,0x03,0x18,0x0C,0x06,/*"��",4*/
 "��",0x04,0x00,0x04,0x00,0x0F,0xF0,0x18,0x20,
      0x64,0x40,0x03,0x80,0x1C,0x70,0xE0,0x0E,
      0x1F,0xF0,0x11,0x10,0x11,0x10,0x1F,0xF0,
      0x11,0x10,0x11,0x10,0x1F,0xF0,0x10,0x10,/*"��",5*/
"ũ",0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFC,
0x42,0x04,0x82,0x08,0x05,0x00,0x05,0x08,
0x08,0x90,0x18,0xA0,0x28,0x40,0x48,0x20,
0x88,0x10,0x0A,0x08,0x0C,0x06,0x08,0x00,/*"ũ",0*/
"��",0x10,0x00,0x11,0xF0,0x11,0x10,0x11,0x10,
0xFD,0x10,0x11,0x10,0x31,0x10,0x39,0x10,
0x55,0x10,0x55,0x10,0x91,0x10,0x11,0x12,
0x11,0x12,0x12,0x12,0x12,0x0E,0x14,0x00,/*"��",1*/
"��",0x10,0x40,0x10,0x20,0x10,0x20,0x13,0xFE,
0xFA,0x02,0x14,0x94,0x11,0x08,0x1A,0x04,
0x30,0x00,0xD1,0xFC,0x10,0x20,0x10,0x20,
0x10,0x20,0x10,0x20,0x57,0xFE,0x20,0x00,/*"��",2*/
"��",0x04,0x04,0x24,0x04,0x24,0x04,0x3F,0xA4,
0x44,0x24,0x04,0x24,0xFF,0xE4,0x04,0x24,
0x04,0x24,0x3F,0xA4,0x24,0xA4,0x24,0xA4,
0x26,0x84,0x25,0x04,0x04,0x14,0x04,0x08,/*"��",3*/
"ϵ",0x00,0xF8,0x3F,0x00,0x04,0x00,0x08,0x20,
0x10,0x40,0x3F,0x80,0x01,0x00,0x06,0x10,
0x18,0x08,0x7F,0xFC,0x01,0x04,0x09,0x20,
0x11,0x10,0x21,0x08,0x45,0x04,0x02,0x00,/*"ϵ",4*/
"ͳ",0x10,0x40,0x10,0x20,0x20,0x20,0x23,0xFE,
0x48,0x40,0xF8,0x88,0x11,0x04,0x23,0xFE,
0x40,0x92,0xF8,0x90,0x40,0x90,0x00,0x90,
0x19,0x12,0xE1,0x12,0x42,0x0E,0x04,0x00/*"ͳ",5*/
};