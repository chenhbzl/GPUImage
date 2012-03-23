#import <UIKit/UIKit.h>
#import "GPUImageOutput.h"


@interface GPUImagePicture : GPUImageOutput
{
    UIImage *imageSource;
    
    CVOpenGLESTextureCacheRef coreVideoTextureCache;
    CVOpenGLESTextureRef texture;
}

// Initialization and teardown
- (id)initWithImage:(UIImage *)newImageSource;
- (id)initWithImage:(UIImage *)newImageSource smoothlyScaleOutput:(BOOL)smoothlyScaleOutput;

// Image rendering
- (void)processImage;

@end
