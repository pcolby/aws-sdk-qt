// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIALIVECONNECTORPIPELINERESPONSE_H
#define QTAWS_CREATEMEDIALIVECONNECTORPIPELINERESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "createmedialiveconnectorpipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaLiveConnectorPipelineResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT CreateMediaLiveConnectorPipelineResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    CreateMediaLiveConnectorPipelineResponse(const CreateMediaLiveConnectorPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMediaLiveConnectorPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMediaLiveConnectorPipelineResponse)
    Q_DISABLE_COPY(CreateMediaLiveConnectorPipelineResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
