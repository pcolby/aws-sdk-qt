// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIACAPTUREPIPELINEREQUEST_P_H
#define QTAWS_DELETEMEDIACAPTUREPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "deletemediacapturepipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaCapturePipelineRequest;

class DeleteMediaCapturePipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    DeleteMediaCapturePipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   DeleteMediaCapturePipelineRequest * const q);
    DeleteMediaCapturePipelineRequestPrivate(const DeleteMediaCapturePipelineRequestPrivate &other,
                                   DeleteMediaCapturePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMediaCapturePipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
