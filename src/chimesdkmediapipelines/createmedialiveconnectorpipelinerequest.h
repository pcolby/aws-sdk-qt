// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIALIVECONNECTORPIPELINEREQUEST_H
#define QTAWS_CREATEMEDIALIVECONNECTORPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaLiveConnectorPipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT CreateMediaLiveConnectorPipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    CreateMediaLiveConnectorPipelineRequest(const CreateMediaLiveConnectorPipelineRequest &other);
    CreateMediaLiveConnectorPipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMediaLiveConnectorPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
