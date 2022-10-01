// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIACAPTUREPIPELINEREQUEST_P_H
#define QTAWS_GETMEDIACAPTUREPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "getmediacapturepipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class GetMediaCapturePipelineRequest;

class GetMediaCapturePipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    GetMediaCapturePipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   GetMediaCapturePipelineRequest * const q);
    GetMediaCapturePipelineRequestPrivate(const GetMediaCapturePipelineRequestPrivate &other,
                                   GetMediaCapturePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMediaCapturePipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
