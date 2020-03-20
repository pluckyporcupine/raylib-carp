/* This file is modified from its original form. 
The original version is licensed under the Apache 2.0 license by Erik Svedäng.
You can find the license here: https://github.com/carp-lang/Carp/blob/master/LICENSE */

#if defined(WIN32) || defined(_WIN32) || \
    defined(__WIN32) && !defined(__CYGWIN__)
#include <BaseTsd.h>

#define NODRAWTEXT
#define NOGDI
#define NOUSER
#define NOSOUND

#include <windows.h>
#undef PlaySound

typedef SSIZE_T ssize_t;
#endif
#ifndef _WIN32
#include <unistd.h>
#endif

typedef char *String;
typedef char *Pattern;

#if defined NDEBUG
#define CHK_INDEX(i, n)
#else

#if defined(WIN32) || defined(_WIN32) || \
    defined(__WIN32) && !defined(__CYGWIN__)
// The %zd format flag doesn't seem to work on Windows?
#define CHK_INDEX_FORMAT_STRING ":%u: bad index: %ld < %ld\n"
#else
#define CHK_INDEX_FORMAT_STRING ":%u: bad index: %zd < %zd\n"
#endif

#define CHK_INDEX(i, n)                                                    \
    do {                                                                   \
        size_t __si = (size_t)i;                                           \
        size_t __ni = (size_t)n;                                           \
        if (!(__si < __ni)) {                                              \
            printf(__FILE__ CHK_INDEX_FORMAT_STRING, __LINE__, (ssize_t)i, \
                   (ssize_t)n);                                            \
            abort();                                                       \
        }                                                                  \
    } while (0)
#endif

// Array
typedef struct {
    size_t len;
    size_t capacity;
    void *data;
} Array;

// Lambdas
typedef struct {
    void *callback;
    void *env;
    void *delete;
    void *copy;
} Lambda;

typedef void *LambdaEnv;
