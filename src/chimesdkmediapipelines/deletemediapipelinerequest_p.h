// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIAPIPELINEREQUEST_P_H
#define QTAWS_DELETEMEDIAPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "deletemediapipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaPipelineRequest;

class DeleteMediaPipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    DeleteMediaPipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   DeleteMediaPipelineRequest * const q);
    DeleteMediaPipelineRequestPrivate(const DeleteMediaPipelineRequestPrivate &other,
                                   DeleteMediaPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMediaPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
