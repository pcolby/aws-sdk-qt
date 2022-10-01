// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACONCATENATIONPIPELINEREQUEST_P_H
#define QTAWS_CREATEMEDIACONCATENATIONPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "createmediaconcatenationpipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaConcatenationPipelineRequest;

class CreateMediaConcatenationPipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    CreateMediaConcatenationPipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   CreateMediaConcatenationPipelineRequest * const q);
    CreateMediaConcatenationPipelineRequestPrivate(const CreateMediaConcatenationPipelineRequestPrivate &other,
                                   CreateMediaConcatenationPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMediaConcatenationPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
