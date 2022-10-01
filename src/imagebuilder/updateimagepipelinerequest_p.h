// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPIPELINEREQUEST_P_H
#define QTAWS_UPDATEIMAGEPIPELINEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "updateimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateImagePipelineRequest;

class UpdateImagePipelineRequestPrivate : public ImageBuilderRequestPrivate {

public:
    UpdateImagePipelineRequestPrivate(const ImageBuilderRequest::Action action,
                                   UpdateImagePipelineRequest * const q);
    UpdateImagePipelineRequestPrivate(const UpdateImagePipelineRequestPrivate &other,
                                   UpdateImagePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
