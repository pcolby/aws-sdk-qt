// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSRESPONSE_P_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepSuccessResponse;

class SendPipelineExecutionStepSuccessResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit SendPipelineExecutionStepSuccessResponsePrivate(SendPipelineExecutionStepSuccessResponse * const q);

    void parseSendPipelineExecutionStepSuccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendPipelineExecutionStepSuccessResponse)
    Q_DISABLE_COPY(SendPipelineExecutionStepSuccessResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
