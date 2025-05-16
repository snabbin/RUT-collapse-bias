#include <stdio.h>
#include <string.h>
#include <zlib.h>

int compress_score(const char *input) {
    uLong src_len = strlen(input);
    uLong dest_len = compressBound(src_len);
    Bytef dest[1024];
    int res = compress(dest, &dest_len, (const Bytef *)input, src_len);
    return res == Z_OK ? (int)dest_len : 9999;
}

int main() {
    const char *inputs[] = {"00000000", "11111111", "01010101", "11010010"};
    const char *chosen = NULL; int min = 9999;
    for (int i = 0; i < 4; ++i) {
        int score = compress_score(inputs[i]);
        printf("Input: %s, Score: %d\n", inputs[i], score);
        if (score < min) { min = score; chosen = inputs[i]; }
    }
    printf("Chosen: %s\n", chosen);
    return 0;
}
