// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINEIMAGESREQUEST_P_H
#define QTAWS_LISTIMAGEPIPELINEIMAGESREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listimagepipelineimagesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelineImagesRequest;

class ListImagePipelineImagesRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListImagePipelineImagesRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListImagePipelineImagesRequest * const q);
    ListImagePipelineImagesRequestPrivate(const ListImagePipelineImagesRequestPrivate &other,
                                   ListImagePipelineImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImagePipelineImagesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
