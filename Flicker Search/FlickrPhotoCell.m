
//  FlickrPhotoCell.m
//  Flicker Search
//
//  Created by Maslov Sergey on 12.09.15.
//  Copyright © 2015 ROKOLabs. All rights reserved.
//

#import "FlickrPhotoCell.h"
#import "FlickrPhoto.h"

@implementation FlickrPhotoCell
- (void)setPhoto:(FlickrPhoto *)photo {

	if (_photo != photo) {
		_photo = photo;
	}
	
	self.imageView.image = _photo.thumbnail;
}

@end
