#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
FILE *inFile, *outFile;
int symbol, code=0;
char unicode_A[]="А"; char unicode_B[]="Б"; char unicode_V[]="В"; char unicode_G[]="Г"; char unicode_D[]="Д";
char unicode_E[]="Е"; char unicode_YO[]="Ё"; char unicode_ZH[]="Ж"; char unicode_Z[]="З"; char unicode_I[]="И";
char unicode_Y[]="Й"; char unicode_K[]="К"; char unicode_L[]="Л"; char unicode_M[]="М"; char unicode_N[]="Н";
char unicode_O[]="О"; char unicode_P[]="П"; char unicode_R[]="Р"; char unicode_S[]="С"; char unicode_T[]="Т";
char unicode_U[]="У"; char unicode_F[]="Ф"; char unicode_H[]="Х"; char unicode_C[]="Ц"; char unicode_CH[]="Ч";
char unicode_SH[]="Ш"; char unicode_Q[]="Щ"; char unicode_HS[]="Ъ"; char unicode_YY[]="Ы"; char unicode_X[]="Ь";
char unicode_EA[]="Э"; char unicode_YU[]="Ю"; char unicode_YA[]="Я";
char unicodeA[]="а"; char unicodeB[]="б"; char unicodeV[]="в"; char unicodeG[]="г"; char unicodeD[]="д";
char unicodeE[]="е"; char unicodeYO[]="ё"; char unicodeZH[]="ж"; char unicodeZ[]="з"; char unicodeI[]="и";
char unicodeY[]="й"; char unicodeK[]="к"; char unicodeL[]="л"; char unicodeM[]="м"; char unicodeN[]="н";
char unicodeO[]="о"; char unicodeP[]="п"; char unicodeR[]="р"; char unicodeS[]="с"; char unicodeT[]="т";
char unicodeU[]="у"; char unicodeF[]="ф"; char unicodeH[]="х"; char unicodeC[]="ц"; char unicodeCH[]="ч";
char unicodeSH[]="ш"; char unicodeQ[]="щ"; char unicodeHS[]="ъ"; char unicodeYY[]="ы"; char unicodeX[]="ь";
char unicodeEA[]="э"; char unicodeYU[]="ю"; char unicodeYA[]="я";

if (argc != 4)   {
printf ("Ошибка ввода\n");
return EXIT_FAILURE;
}

inFile=fopen(argv[1], "r");
outFile=fopen(argv[3],"w");
if (!inFile || !outFile)   {
printf ("Ошибка в открытии файла\n");
return EXIT_FAILURE;
}
else {
if (strcmp (argv[2], "CP-1251")==0)
code=1;
if (strcmp (argv[2], "ISO-8859-5")==0)
code=2;
if (strcmp (argv[2], "KOI8-R")==0)
code=3;
switch (code)    {
case 1:           {

while (!feof(inFile))   {

symbol = getc(inFile);

if (symbol >128)   {

switch (symbol)   {

case 0xc0:
    fprintf(outFile,"%s", unicode_A);
                                break;
case 0xc1:
    fprintf(outFile,"%s", unicode_B);
                                break;
case 0xc2:
    fprintf(outFile,"%s", unicode_V);
                                break;
case 0xc3:
    fprintf(outFile,"%s", unicode_G);
                                break;
case 0xc4:
    fprintf(outFile,"%s", unicode_D);
                                break;
case 0xc5:
    fprintf(outFile,"%s", unicode_E);
                                break;
case 0xa8:
    fprintf(outFile,"%s", unicode_YO);
                                break;
case 0xc6:
    fprintf(outFile,"%s", unicode_ZH);
                                break;
case 0xc7:
    fprintf(outFile,"%s", unicode_Z);
                                break;
case 0xc8:
    fprintf(outFile,"%s", unicode_I);
                                break;
case 0xc9:
    fprintf(outFile,"%s", unicode_Y);
                                break;
case 0xca:
    fprintf(outFile,"%s", unicode_K);
                                break;
case 0xcb:
    fprintf(outFile,"%s", unicode_L);
                                break;
case 0xcc:
    fprintf(outFile,"%s", unicode_M);
                                break;
case 0xcd:
    fprintf(outFile,"%s", unicode_N);
                                break;
case 0xce:
    fprintf(outFile,"%s", unicode_O);
                                break;
case 0xcf:
    fprintf(outFile,"%s", unicode_P);
                                break;
case 0xd0:
    fprintf(outFile,"%s", unicode_R);
                                break;
case 0xd1:
    fprintf(outFile,"%s", unicode_S);
                                break;
case 0xd2:
    fprintf(outFile,"%s", unicode_T);
                                break;
case 0xd3:
    fprintf(outFile,"%s", unicode_U);
                                break;
case 0xd4:
    fprintf(outFile,"%s", unicode_F);
                                break;
case 0xd5:
    fprintf(outFile,"%s", unicode_H);
                                break;
case 0xd6:
    fprintf(outFile,"%s", unicode_C);
                                break;
case 0xd7:
    fprintf(outFile,"%s", unicode_CH);
                                break;
case 0xd8:
    fprintf(outFile,"%s", unicode_SH);
                                break;
case 0xd9:
    fprintf(outFile,"%s", unicode_Q);
                                break;
case 0xda:
    fprintf(outFile,"%s", unicode_HS);
                                break;
case 0xdb:
    fprintf(outFile,"%s", unicode_YY);
                                break;
case 0xdc:
    fprintf(outFile,"%s", unicode_X);
                                break;
case 0xdd:
    fprintf(outFile,"%s", unicode_EA);
                                break;
case 0xde:
    fprintf(outFile,"%s", unicode_YU);
                                break;
case 0xdf:
    fprintf(outFile,"%s", unicode_YA);
                                break;
case 0xe0:
    fprintf(outFile,"%s", unicodeA);
                                break;
case 0xe1:
    fprintf(outFile,"%s", unicodeB);
                                break;
case 0xe2:
    fprintf(outFile,"%s", unicodeV);
                                break;
case 0xe3:
    fprintf(outFile,"%s", unicodeG);
                                break;
case 0xe4:
    fprintf(outFile,"%s", unicodeD);
                                break;
case 0xe5:
    fprintf(outFile,"%s", unicodeE);
                                break;
case 0xb8:
    fprintf(outFile,"%s", unicodeYO);
                                break;
case 0xe6:
    fprintf(outFile,"%s", unicodeZH);
                                break;
case 0xe7:
    fprintf(outFile,"%s", unicodeZ);
                                break;
case 0xe8:
    fprintf(outFile,"%s", unicodeI);
                                break;
case 0xe9:
    fprintf(outFile,"%s", unicodeY);
                                break;
case 0xea:
    fprintf(outFile,"%s", unicodeK);
                                break;
case 0xeb:
    fprintf(outFile,"%s", unicodeL);
                                break;
case 0xec:
    fprintf(outFile,"%s", unicodeM);
                                break;
case 0xed:
    fprintf(outFile,"%s", unicodeN);
                                break;
case 0xee:
    fprintf(outFile,"%s", unicodeO);
                                break;
case 0xef:
    fprintf(outFile,"%s", unicodeP);
                                break;
case 0xf0:
    fprintf(outFile,"%s", unicodeR);
                                break;
case 0xf1:
    fprintf(outFile,"%s", unicodeS);
                                break;
case 0xf2:
    fprintf(outFile,"%s", unicodeT);
                                break;
case 0xf3:
    fprintf(outFile,"%s", unicodeU);
                                break;
case 0xf4:
    fprintf(outFile,"%s", unicodeF);
                                break;
case 0xf5:
    fprintf(outFile,"%s", unicodeH);
                                break;
case 0xf6:
    fprintf(outFile,"%s", unicodeC);
                                break;
case 0xf7:
    fprintf(outFile,"%s", unicodeCH);
                                break;
case 0xf8:
    fprintf(outFile,"%s", unicodeSH);
                                break;
case 0xf9:
    fprintf(outFile,"%s", unicodeQ);
                                break;
case 0xfa:
    fprintf(outFile,"%s", unicodeHS);
                                break;
case 0xfb:
    fprintf(outFile,"%s", unicodeYY);
                                break;
case 0xfc:
    fprintf(outFile,"%s", unicodeX);
                                break;
case 0xfd:
    fprintf(outFile,"%s", unicodeEA);
                                break;
case 0xfe:
    fprintf(outFile,"%s", unicodeYU);
                                break;
case 0xff:
    fprintf(outFile,"%s", unicodeYA);
                                break;

}
}
else
fprintf(outFile,"%c", symbol);
}
}
break;
//******************************************************************************************************
case 2:  {

while (!feof(inFile))   {

symbol = getc(inFile);

if (symbol >128)   {

switch (symbol)   {

case 0xb0:
    fprintf(outFile,"%s", unicode_A);
                                break;
case 0xb1:
    fprintf(outFile,"%s", unicode_B);
                                break;
case 0xb2:
    fprintf(outFile,"%s", unicode_V);
                                break;
case 0xb3:
    fprintf(outFile,"%s", unicode_G);
                                break;
case 0xb4:
    fprintf(outFile,"%s", unicode_D);
                                break;
case 0xb5:
    fprintf(outFile,"%s", unicode_E);
                                break;
case 0xa1:
    fprintf(outFile,"%s", unicode_YO);
                                break;
case 0xb6:
    fprintf(outFile,"%s", unicode_ZH);
                                break;
case 0xb7:
    fprintf(outFile,"%s", unicode_Z);
                                break;
case 0xb8:
    fprintf(outFile,"%s", unicode_I);
                                break;
case 0xb9:
    fprintf(outFile,"%s", unicode_Y);
                                break;
case 0xba:
    fprintf(outFile,"%s", unicode_K);
                                break;
case 0xbb:
    fprintf(outFile,"%s", unicode_L);
                                break;
case 0xbc:
    fprintf(outFile,"%s", unicode_M);
                                break;
case 0xbd:
    fprintf(outFile,"%s", unicode_N);
                                break;
case 0xbe:
    fprintf(outFile,"%s", unicode_O);
                                break;
case 0xbf:
    fprintf(outFile,"%s", unicode_P);
                                break;
case 0xc0:
    fprintf(outFile,"%s", unicode_R);
                                break;
case 0xc1:
    fprintf(outFile,"%s", unicode_S);
                                break;
case 0xc2:
    fprintf(outFile,"%s", unicode_T);
                                break;
case 0xc3:
    fprintf(outFile,"%s", unicode_U);
                                break;
case 0xc4:
    fprintf(outFile,"%s", unicode_F);
                                break;
case 0xc5:
    fprintf(outFile,"%s", unicode_H);
                                break;
case 0xc6:
    fprintf(outFile,"%s", unicode_C);
                                break;
case 0xc7:
    fprintf(outFile,"%s", unicode_CH);
                                break;
case 0xc8:
    fprintf(outFile,"%s", unicode_SH);
                                break;
case 0xc9:
    fprintf(outFile,"%s", unicode_Q);
                                break;
case 0xca:
    fprintf(outFile,"%s", unicode_HS);
                                break;
case 0xcb:
    fprintf(outFile,"%s", unicode_YY);
                                break;
case 0xcc:
    fprintf(outFile,"%s", unicode_X);
                                break;
case 0xcd:
    fprintf(outFile,"%s", unicode_EA);
                                break;
case 0xce:
    fprintf(outFile,"%s", unicode_YU);
                                break;
case 0xcf:
    fprintf(outFile,"%s", unicode_YA);
                                break;
case 0xd0:
    fprintf(outFile,"%s", unicodeA);
                                break;
case 0xd1:
    fprintf(outFile,"%s", unicodeB);
                                break;
case 0xd2:
    fprintf(outFile,"%s", unicodeV);
                                break;
case 0xd3:
    fprintf(outFile,"%s", unicodeG);
                                break;
case 0xd4:
    fprintf(outFile,"%s", unicodeD);
                                break;
case 0xd5:
    fprintf(outFile,"%s", unicodeE);
                                break;
case 0xf1:
    fprintf(outFile,"%s", unicodeYO);
                                break;
case 0xd6:
    fprintf(outFile,"%s", unicodeZH);
                                break;
case 0xd7:
    fprintf(outFile,"%s", unicodeZ);
                                break;
case 0xd8:
    fprintf(outFile,"%s", unicodeI);
                                break;
case 0xd9:
    fprintf(outFile,"%s", unicodeY);
                                break;
case 0xda:
    fprintf(outFile,"%s", unicodeK);
                                break;
case 0xdb:
    fprintf(outFile,"%s", unicodeL);
                                break;
case 0xdc:
    fprintf(outFile,"%s", unicodeM);
                                break;
case 0xdd:
    fprintf(outFile,"%s", unicodeN);
                                break;
case 0xde:
    fprintf(outFile,"%s", unicodeO);
                                break;
case 0xdf:
    fprintf(outFile,"%s", unicodeP);
                                break;
case 0xe0:
    fprintf(outFile,"%s", unicodeR);
                                break;
case 0xe1:
    fprintf(outFile,"%s", unicodeS);
                                break;
case 0xe2:
    fprintf(outFile,"%s", unicodeT);
                                break;
case 0xe3:
    fprintf(outFile,"%s", unicodeU);
                                break;
case 0xe4:
    fprintf(outFile,"%s", unicodeF);
                                break;
case 0xe5:
    fprintf(outFile,"%s", unicodeH);
                                break;
case 0xe6:
    fprintf(outFile,"%s", unicodeC);
                                break;
case 0xe7:
    fprintf(outFile,"%s", unicodeCH);
                                break;
case 0xe8:
    fprintf(outFile,"%s", unicodeSH);
                                break;
case 0xe9:
    fprintf(outFile,"%s", unicodeQ);
                                break;
case 0xea:
    fprintf(outFile,"%s", unicodeHS);
                                break;
case 0xeb:
    fprintf(outFile,"%s", unicodeYY);
                                break;
case 0xec:
    fprintf(outFile,"%s", unicodeX);
                                break;
case 0xed:
    fprintf(outFile,"%s", unicodeEA);
                                break;
case 0xee:
    fprintf(outFile,"%s", unicodeYU);
                                break;
case 0xef:
    fprintf(outFile,"%s", unicodeYA);
                                break;

}
}
else
fprintf(outFile,"%c", symbol);
}
}
break;
//******************************************************************************************************
case 3:  {

while (!feof(inFile))   {

symbol = getc(inFile);

if (symbol >128)   {

switch (symbol)   {

case 0xe1:
    fprintf(outFile,"%s", unicode_A);
                                break;
case 0xe2:
    fprintf(outFile,"%s", unicode_B);
                                break;
case 0xf7:
    fprintf(outFile,"%s", unicode_V);
                                break;
case 0xe7:
    fprintf(outFile,"%s", unicode_G);
                                break;
case 0xe4:
    fprintf(outFile,"%s", unicode_D);
                                break;
case 0xe5:
    fprintf(outFile,"%s", unicode_E);
                                break;
case 0xb3:
    fprintf(outFile,"%s", unicode_YO);
                                break;
case 0xf6:
    fprintf(outFile,"%s", unicode_ZH);
                                break;
case 0xfa:
    fprintf(outFile,"%s", unicode_Z);
                                break;
case 0xe9:
    fprintf(outFile,"%s", unicode_I);
                                break;
case 0xea:
    fprintf(outFile,"%s", unicode_Y);
                                break;
case 0xeb:
    fprintf(outFile,"%s", unicode_K);
                                break;
case 0xec:
    fprintf(outFile,"%s", unicode_L);
                                break;
case 0xed:
    fprintf(outFile,"%s", unicode_M);
                                break;
case 0xee:
    fprintf(outFile,"%s", unicode_N);
                                break;
case 0xef:
    fprintf(outFile,"%s", unicode_O);
                                break;
case 0xf0:
    fprintf(outFile,"%s", unicode_P);
                                break;
case 0xf2:
    fprintf(outFile,"%s", unicode_R);
                                break;
case 0xf3:
    fprintf(outFile,"%s", unicode_S);
                                break;
case 0xf4:
    fprintf(outFile,"%s", unicode_T);
                                break;
case 0xf5:
    fprintf(outFile,"%s", unicode_U);
                                break;
case 0xe6:
    fprintf(outFile,"%s", unicode_F);
                                break;
case 0xe8:
    fprintf(outFile,"%s", unicode_H);
                                break;
case 0xe3:
    fprintf(outFile,"%s", unicode_C);
                                break;
case 0xfe:
    fprintf(outFile,"%s", unicode_CH);
                                break;
case 0xfb:
    fprintf(outFile,"%s", unicode_SH);
                                break;
case 0xfd:
    fprintf(outFile,"%s", unicode_Q);
                                break;
case 0xff:
    fprintf(outFile,"%s", unicode_HS);
                                break;
case 0xf9:
    fprintf(outFile,"%s", unicode_YY);
                                break;
case 0xf8:
    fprintf(outFile,"%s", unicode_X);
                                break;
case 0xfc:
    fprintf(outFile,"%s", unicode_EA);
                                break;
case 0xe0:
    fprintf(outFile,"%s", unicode_YU);
                                break;
case 0xf1:
    fprintf(outFile,"%s", unicode_YA);
                                break;
case 0xc1:
    fprintf(outFile,"%s", unicodeA);
                                break;
case 0xc2:
    fprintf(outFile,"%s", unicodeB);
                                break;
case 0xd7:
    fprintf(outFile,"%s", unicodeV);
                                break;
case 0xc7:
    fprintf(outFile,"%s", unicodeG);
                                break;
case 0xc4:
    fprintf(outFile,"%s", unicodeD);
                                break;
case 0xc5:
    fprintf(outFile,"%s", unicodeE);
                                break;
case 0xa3:
    fprintf(outFile,"%s", unicodeYO);
                                break;
case 0xd6:
    fprintf(outFile,"%s", unicodeZH);
                                break;
case 0xda:
    fprintf(outFile,"%s", unicodeZ);
                                break;
case 0xc9:
    fprintf(outFile,"%s", unicodeI);
                                break;
case 0xca:
    fprintf(outFile,"%s", unicodeY);
                                break;
case 0xcb:
    fprintf(outFile,"%s", unicodeK);
                                break;
case 0xcc:
    fprintf(outFile,"%s", unicodeL);
                                break;
case 0xcd:
    fprintf(outFile,"%s", unicodeM);
                                break;
case 0xce:
    fprintf(outFile,"%s", unicodeN);
                                break;
case 0xcf:
    fprintf(outFile,"%s", unicodeO);
                                break;
case 0xd0:
    fprintf(outFile,"%s", unicodeP);
                                break;
case 0xd2:
    fprintf(outFile,"%s", unicodeR);
                                break;
case 0xd3:
    fprintf(outFile,"%s", unicodeS);
                                break;
case 0xd4:
    fprintf(outFile,"%s", unicodeT);
                                break;
case 0xd5:
    fprintf(outFile,"%s", unicodeU);
                                break;
case 0xc6:
    fprintf(outFile,"%s", unicodeF);
                                break;
case 0xc8:
    fprintf(outFile,"%s", unicodeH);
                                break;
case 0xc3:
    fprintf(outFile,"%s", unicodeC);
                                break;
case 0xde:
    fprintf(outFile,"%s", unicodeCH);
                                break;
case 0xdb:
    fprintf(outFile,"%s", unicodeSH);
                                break;
case 0xdd:
    fprintf(outFile,"%s", unicodeQ);
                                break;
case 0xdf:
    fprintf(outFile,"%s", unicodeHS);
                                break;
case 0xd9:
    fprintf(outFile,"%s", unicodeYY);
                                break;
case 0xd8:
    fprintf(outFile,"%s", unicodeX);
                                break;
case 0xdc:
    fprintf(outFile,"%s", unicodeEA);
                                break;
case 0xc0:
    fprintf(outFile,"%s", unicodeYU);
                                break;
case 0xd1:
    fprintf(outFile,"%s", unicodeYA);
                                break;

}
}
else
fprintf(outFile,"%c", symbol);
}
}
break;
default: {
printf ("Неправильное обозначение кодировки\n");
return EXIT_FAILURE;}
}
}
fclose(inFile);
fclose(outFile);

return 0;
}
