typedef struct {
    char* key;
    void* val;
} dict;

void* dict_get();

int str_replace(char* repl, char* str);