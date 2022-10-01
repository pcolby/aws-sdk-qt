// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSRESPONSE_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSRESPONSE_H

#include "sagemakerresponse.h"
#include "sendpipelineexecutionstepsuccessrequest.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepSuccessResponsePrivate;

class QTAWSSAGEMAKER_EXPORT SendPipelineExecutionStepSuccessResponse : public SageMakerResponse {
    Q_OBJECT

public:
    SendPipelineExecutionStepSuccessResponse(const SendPipelineExecutionStepSuccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendPipelineExecutionStepSuccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendPipelineExecutionStepSuccessResponse)
    Q_DISABLE_COPY(SendPipelineExecutionStepSuccessResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
