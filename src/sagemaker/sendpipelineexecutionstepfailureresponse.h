// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPFAILURERESPONSE_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPFAILURERESPONSE_H

#include "sagemakerresponse.h"
#include "sendpipelineexecutionstepfailurerequest.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepFailureResponsePrivate;

class QTAWSSAGEMAKER_EXPORT SendPipelineExecutionStepFailureResponse : public SageMakerResponse {
    Q_OBJECT

public:
    SendPipelineExecutionStepFailureResponse(const SendPipelineExecutionStepFailureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendPipelineExecutionStepFailureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendPipelineExecutionStepFailureResponse)
    Q_DISABLE_COPY(SendPipelineExecutionStepFailureResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
