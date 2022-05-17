



char line[] = "xxxxx xx xx x x x x x x\n";
char digits[] = "0123456789ABCDEF";
char toASCII(char halfbyte){
    return digits[halfbyte];
}

char toASCII(char halfbyte){
    switch (c){
           case 1: return '1';
           case 2: return '2';
           case 3: return '3';
           case 4: return '4';
           case 5: return '5';
           case 6: return '6';
           case 7: return '7';
           case 8: return '8';

    }
}

char toASCII(char halfbyte){
    if (halfbyte < 10) return halfbyte + '0';
    return halfbyte -10 + 'A';
}