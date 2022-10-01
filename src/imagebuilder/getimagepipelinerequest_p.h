// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPIPELINEREQUEST_P_H
#define QTAWS_GETIMAGEPIPELINEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePipelineRequest;

class GetImagePipelineRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetImagePipelineRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetImagePipelineRequest * const q);
    GetImagePipelineRequestPrivate(const GetImagePipelineRequestPrivate &other,
                                   GetImagePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
