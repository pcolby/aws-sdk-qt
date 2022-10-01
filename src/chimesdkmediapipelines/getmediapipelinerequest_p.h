// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAPIPELINEREQUEST_P_H
#define QTAWS_GETMEDIAPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "getmediapipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class GetMediaPipelineRequest;

class GetMediaPipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    GetMediaPipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   GetMediaPipelineRequest * const q);
    GetMediaPipelineRequestPrivate(const GetMediaPipelineRequestPrivate &other,
                                   GetMediaPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMediaPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
