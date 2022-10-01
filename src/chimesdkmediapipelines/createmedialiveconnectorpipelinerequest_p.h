// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIALIVECONNECTORPIPELINEREQUEST_P_H
#define QTAWS_CREATEMEDIALIVECONNECTORPIPELINEREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "createmedialiveconnectorpipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaLiveConnectorPipelineRequest;

class CreateMediaLiveConnectorPipelineRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    CreateMediaLiveConnectorPipelineRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   CreateMediaLiveConnectorPipelineRequest * const q);
    CreateMediaLiveConnectorPipelineRequestPrivate(const CreateMediaLiveConnectorPipelineRequestPrivate &other,
                                   CreateMediaLiveConnectorPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMediaLiveConnectorPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
