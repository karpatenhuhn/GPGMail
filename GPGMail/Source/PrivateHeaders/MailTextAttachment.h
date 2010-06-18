#import <MimeTextAttachment.h>

#ifdef SNOW_LEOPARD

@interface MailTextAttachment : MimeTextAttachment
{
    unsigned int _isPossibleToDisplayAttachmentInline:1;
    unsigned int _isPossibleToDisplayAttachmentAsView:1;
    unsigned int _isDisplayingAttachmentInline:1;
    unsigned int _shouldDisplayInlineByDefault:1;
    unsigned int _isImageBeingResized:1;
    NSFileWrapper *_originalFileWrapper;
    NSImage *_originalImage;
    struct CGSize _originalImageSize;
    struct CGSize _maxImageSize;
    struct CGSize _lastMaxImageSize;
}

+ (void)initialize;
+ (id)replacementAttachmentForAttachment:(id)arg1;
- (id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2 iconOnly:(BOOL)arg3;
- (id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2;
- (void)dealloc;
- (BOOL)shouldDisplayInlineByDefault;
- (void)setShouldDisplayInlineByDefault:(BOOL)arg1;
- (void)setIsPossibleToDisplayAttachmentInline:(BOOL)arg1;
- (BOOL)isPossibleToDisplayAttachmentInline;
- (BOOL)isDisplayingAttachmentInline;
- (void)setIsDisplayingAttachmentInline:(BOOL)arg1;
- (BOOL)hasData;
- (void)updateFromPath:(id)arg1 contentID:(id)arg2;
- (id)attachmentCell;
- (id)_getInlineImage;
- (void)_configureLabelForCell:(id)arg1;
- (id)toolTip;
- (void)setIsPartOfStationery:(BOOL)arg1;
- (BOOL)isPartOfStationery;
- (BOOL)isPDF;
- (BOOL)isScalable;
- (BOOL)isFullSize;
- (id)_originalImage;
- (void)_setupOriginalImageIfNeeded;
- (struct CGSize)_originalImageSize;
- (id)originalFileWrapper;
- (struct CGSize)maxImageSize;
- (struct CGSize)originalImageSize;
- (void)resizingStarted:(struct CGSize)arg1;
- (void)resizingFinished:(id)arg1 imageSize:(struct CGSize)arg2 fileExtension:(id)arg3 fileType:(unsigned long)arg4 maxImageSize:(struct CGSize)arg5;

@end

@interface MailTextAttachment (CustomAttachmentViewManagement)
+ (void)registerViewingClass:(Class)arg1 forMimeTypes:(id)arg2;
@end

#elif defined(LEOPARD)

@interface MailTextAttachment : MimeTextAttachment
{
    unsigned int _isPossibleToDisplayAttachmentInline:1;
    unsigned int _isPossibleToDisplayAttachmentAsView:1;
    unsigned int _isDisplayingAttachmentInline:1;
    unsigned int _shouldDisplayInlineByDefault:1;
    unsigned int _isImageBeingResized:1;
    NSFileWrapper *_originalFileWrapper;
    NSImage *_originalImage;
    struct _NSSize _originalImageSize;
    struct _NSSize _maxImageSize;
    struct _NSSize _lastMaxImageSize;
    BOOL _isInitializing;
}

+ (void)initialize;
+ (id)replacementAttachmentForAttachment:(id)fp8;
- (id)initWithFileWrapper:(id)fp8;
- (void)dealloc;
- (id)initWithMimePart:(id)fp8 andFileWrapper:(id)fp12;
- (id)initWithMimePart:(id)fp8 andFileWrapper:(id)fp12 iconOnly:(BOOL)fp16;
- (BOOL)shouldDisplayInlineByDefault;
- (void)setShouldDisplayInlineByDefault:(BOOL)fp8;
- (void)setIsPossibleToDisplayAttachmentInline:(BOOL)fp8;
- (BOOL)isPossibleToDisplayAttachmentInline;
- (BOOL)isDisplayingAttachmentInline;
- (void)setIsDisplayingAttachmentInline:(BOOL)fp8;
- (void)downloadFinished;
- (BOOL)hasData;
- (void)updateFromPath:(id)fp8 contentID:(id)fp12;
- (id)attachmentCell;
- (id)_getInlineImage;
- (void)_configureLabelForCell:(id)fp8;
- (id)toolTip;
- (void)setIsPartOfStationery:(BOOL)fp8;
- (BOOL)isPartOfStationery;
- (BOOL)isPDF;
- (BOOL)isScalable;
- (BOOL)isFullSize;
- (id)_originalImage;
- (void)_setupOriginalImageIfNeeded;
- (struct _NSSize)_originalImageSize;
- (id)originalFileWrapper;
- (struct _NSSize)maxImageSize;
- (struct _NSSize)originalImageSize;
- (void)resizingStarted:(struct _NSSize)fp8;
- (void)resizingFinished:(id)fp8 imageSize:(struct _NSSize)fp12 fileExtension:(id)fp20 fileType:(unsigned long)fp24 maxImageSize:(struct _NSSize)fp28;

@end

@interface MailTextAttachment (CustomAttachmentViewManagement)
+ (void)registerViewingClass:(Class)fp8 forMimeTypes:(id)fp12;
@end

#elif defined(TIGER)

@interface MailTextAttachment : MimeTextAttachment
{
    unsigned int _isPossibleToDisplayAttachmentInline:1;
    unsigned int _isPossibleToDisplayAttachmentAsView:1;
    unsigned int _isDisplayingAttachmentInline:1;
    unsigned int _isImageBeingResized:1;
    NSFileWrapper *_originalFileWrapper;
    NSImage *_originalImage;
    struct _NSSize _originalImageSize;
    struct _NSSize _maxImageSize;
    struct _NSSize _lastMaxImageSize;
}

+ (void)initialize;
- (id)initWithFileWrapper:(id)fp8;
- (void)dealloc;
- (id)initWithMimePart:(id)fp8 andFileWrapper:(id)fp12;
- (void)setIsPossibleToDisplayAttachmentInline:(BOOL)fp8;
- (BOOL)isPossibleToDisplayAttachmentInline;
- (BOOL)isDisplayingAttachmentInline;
- (void)setIsDisplayingAttachmentInline:(BOOL)fp8;
- (id)attachmentCell;
- (id)_getInlineImage;
- (void)_configureLabelForCell:(id)fp8;
- (id)toolTip;
- (BOOL)isScalable;
- (BOOL)isFullSize;
- (id)_originalImage;
- (struct _NSSize)_originalImageSize;
- (id)originalFileWrapper;
- (struct _NSSize)maxImageSize;
- (struct _NSSize)originalImageSize;
- (void)resizingStarted:(struct _NSSize)fp8;
- (void)resizingFinished:(id)fp8 imageSize:(struct _NSSize)fp12 fileExtension:(id)fp20 fileType:(unsigned long)fp24 maxImageSize:(struct _NSSize)fp28;

@end

@interface MailTextAttachment (CustomAttachmentViewManagement)
+ (void)registerViewingClass:(Class)fp8 forMimeTypes:(id)fp12;
@end

#else

@interface MailTextAttachment:MimeTextAttachment
{
    int _isPossibleToDisplayAttachmentInline:1;	// 20 = 0x14
    int _isPossibleToDisplayAttachmentAsView:1;	// 20 = 0x14
    int _isDisplayingAttachmentInline:1;	// 20 = 0x14
}

+ (void)initialize;
- initWithFileWrapper:fp8;
- initWithMimePart:fp8 andFileWrapper:fp12;
- (void)setIsPossibleToDisplayAttachmentInline:(char)fp8;
- (char)isPossibleToDisplayAttachmentInline;
- (char)isDisplayingAttachmentInline;
- (void)setIsDisplayingAttachmentInline:(char)fp8;
- attachmentCell;
- _getInlineImage;
- (void)_configureLabelForCell:fp8;
- toolTip;

@end

@interface MailTextAttachment(CustomAttachmentViewManagement)
+ (void)registerViewingClass:(Class)fp8 forMimeTypes:fp12;
@end

#endif
