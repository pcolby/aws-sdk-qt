// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYSTAGEEXECUTIONRESPONSE_P_H
#define QTAWS_RETRYSTAGEEXECUTIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class RetryStageExecutionResponse;

class RetryStageExecutionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit RetryStageExecutionResponsePrivate(RetryStageExecutionResponse * const q);

    void parseRetryStageExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetryStageExecutionResponse)
    Q_DISABLE_COPY(RetryStageExecutionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
