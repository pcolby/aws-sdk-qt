// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYSTAGEEXECUTIONRESPONSE_H
#define QTAWS_RETRYSTAGEEXECUTIONRESPONSE_H

#include "codepipelineresponse.h"
#include "retrystageexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class RetryStageExecutionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT RetryStageExecutionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    RetryStageExecutionResponse(const RetryStageExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetryStageExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryStageExecutionResponse)
    Q_DISABLE_COPY(RetryStageExecutionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
