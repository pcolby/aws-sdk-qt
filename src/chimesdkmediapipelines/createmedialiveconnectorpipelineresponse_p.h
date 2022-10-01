// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIALIVECONNECTORPIPELINERESPONSE_P_H
#define QTAWS_CREATEMEDIALIVECONNECTORPIPELINERESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaLiveConnectorPipelineResponse;

class CreateMediaLiveConnectorPipelineResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit CreateMediaLiveConnectorPipelineResponsePrivate(CreateMediaLiveConnectorPipelineResponse * const q);

    void parseCreateMediaLiveConnectorPipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMediaLiveConnectorPipelineResponse)
    Q_DISABLE_COPY(CreateMediaLiveConnectorPipelineResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
