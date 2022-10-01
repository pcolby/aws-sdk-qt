// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPFAILURERESPONSE_P_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPFAILURERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepFailureResponse;

class SendPipelineExecutionStepFailureResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit SendPipelineExecutionStepFailureResponsePrivate(SendPipelineExecutionStepFailureResponse * const q);

    void parseSendPipelineExecutionStepFailureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendPipelineExecutionStepFailureResponse)
    Q_DISABLE_COPY(SendPipelineExecutionStepFailureResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
