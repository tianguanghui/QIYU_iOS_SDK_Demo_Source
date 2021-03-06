/*
 * This file is part of the YSFWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * Created by james <https://github.com/mystcolor> on 9/28/11.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>
#import "YSFWebImageCompat.h"

@interface UIImage (YSFForceDecode)

+ (UIImage *)ysf_forceDecodedImageWithImage:(UIImage *)image;

@end
