// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACAPTUREPIPELINEREQUEST_P_H
#define QTAWS_CREATEMEDIACAPTUREPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "createmediacapturepipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaCapturePipelineRequest;

class CreateMediaCapturePipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    CreateMediaCapturePipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   CreateMediaCapturePipelineRequest * const q);
    CreateMediaCapturePipelineRequestPrivate(const CreateMediaCapturePipelineRequestPrivate &other,
                                   CreateMediaCapturePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMediaCapturePipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
