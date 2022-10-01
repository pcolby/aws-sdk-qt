// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEPIPELINEREQUEST_P_H
#define QTAWS_CREATEIMAGEPIPELINEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "createimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImagePipelineRequest;

class CreateImagePipelineRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CreateImagePipelineRequestPrivate(const ImageBuilderRequest::Action action,
                                   CreateImagePipelineRequest * const q);
    CreateImagePipelineRequestPrivate(const CreateImagePipelineRequestPrivate &other,
                                   CreateImagePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
