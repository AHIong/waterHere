//
//  UIButton+Common.h
//  shuaidanbao
//
//  Created by apple on 16/1/6.
//  Copyright © 2016年 sdb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)

/**
 *  压缩上传图片到指定字节
 *
 *  @param image     压缩的图片
 *  @param maxLength 压缩后最大字节大小
 *
 *  @return 压缩后图片的二进制
 */
+ (NSData *) compressImage:(UIImage *)image toMaxLength:(NSInteger) maxLength;

/**
 *  获得指定size的图片
 *
 *  @param image   原始图片
 *  @param newSize 指定的size
 *
 *  @return 调整后的图片
 */
+ (UIImage *)resizeImage:(UIImage *) image withNewSize:(CGSize) newSize;

/**
 *  通过指定图片最长边，获得等比例的图片size
 *
 *  @param image       原始图片
 *  @param imageLength 图片允许的最长宽度（高度）
 *
 *  @return 获得等比例的size
 */
+ (CGSize) scaleImage:(UIImage *) image withLength:(CGFloat) imageLength;
/**
 *  通过指定图片最长边，获得等比例的图片size
 *
 *  @param image       原始图片
 *  @param imageWidth 图片允许的最长宽度（宽度）
 *
 *  @return 获得等比例的size
 */
+ (CGSize) scaleImage:(UIImage *) image withWidth:(CGFloat) imageWidth;

///对指定图片进行拉伸
+ (UIImage*)resizableImage:(NSString *)name;

/// 按比例缩小
+ (CGSize)neededSizeForPhoto:(CGSize)bubbleSize;
/**
 *  通过获得图片的大小，获得等比例的图片size
 *
 *  @param image       原始图片大小
 *  @param imageWidth 图片允许的最长宽度（宽度）
 *
 *  @return 获得等比例的size
 */
+ (CGSize) scaleImageSize:(CGSize )imageSize withWidth:(CGFloat) imageWidth;
/**
 *  根据颜色获得图片
 *
 *  @param color <#color description#>
 *
 *  @return <#return value description#>
 */
+(UIImage *)imageFromColor:(UIColor *)color;

@end