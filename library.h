#ifndef UTILS_LIBRARY_H
#define UTILS_LIBRARY_H

#define UTILS_LIBRARY_API __declspec(dllexport)

extern "C" UTILS_LIBRARY_API void hello();
extern "C" UTILS_LIBRARY_API int add(int, int);
extern "C" UTILS_LIBRARY_API char* copy_str(const char*);
extern "C" UTILS_LIBRARY_API void free_buf(void *);

//#ifdef __cplusplus
//extern "C" {
//#endif
//void hello();
//int add(int, int);
//char* copy_str(const char *);
//void free_buf(void *);
//#ifdef __cplusplus
//}
//#endif

#endif //UTILS_LIBRARY_H
