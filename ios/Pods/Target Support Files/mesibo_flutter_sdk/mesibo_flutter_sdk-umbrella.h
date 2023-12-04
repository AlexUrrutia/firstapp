#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MesiboPlugin.h"

FOUNDATION_EXPORT double mesibo_flutter_sdkVersionNumber;
FOUNDATION_EXPORT const unsigned char mesibo_flutter_sdkVersionString[];

