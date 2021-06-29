#ifndef UTILS_LIBRARY_H
#define UTILS_LIBRARY_H

#ifdef __cplusplus
extern "C" {
#endif
void hello();
int add(int, int);
char* copy_str(const char *);
void free_buf(void *);
#ifdef __cplusplus
}
#endif

#endif //UTILS_LIBRARY_H
