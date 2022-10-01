// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPIPELINEREQUEST_P_H
#define QTAWS_DELETEIMAGEPIPELINEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "deleteimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImagePipelineRequest;

class DeleteImagePipelineRequestPrivate : public ImageBuilderRequestPrivate {

public:
    DeleteImagePipelineRequestPrivate(const ImageBuilderRequest::Action action,
                                   DeleteImagePipelineRequest * const q);
    DeleteImagePipelineRequestPrivate(const DeleteImagePipelineRequestPrivate &other,
                                   DeleteImagePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
