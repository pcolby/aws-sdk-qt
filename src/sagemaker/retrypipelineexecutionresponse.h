// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_RETRYPIPELINEEXECUTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "retrypipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class RetryPipelineExecutionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT RetryPipelineExecutionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    RetryPipelineExecutionResponse(const RetryPipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetryPipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryPipelineExecutionResponse)
    Q_DISABLE_COPY(RetryPipelineExecutionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
