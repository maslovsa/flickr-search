//
//  FlickrPhotoCell.h
//  Flicker Search
//
//  Created by Maslov Sergey on 12.09.15.
//  Copyright © 2015 ROKOLabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@class FlickrPhoto;

@interface FlickrPhotoCell : UICollectionViewCell
@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) FlickrPhoto *photo;

-(void) setPhoto:(FlickrPhoto *)photo;
@end