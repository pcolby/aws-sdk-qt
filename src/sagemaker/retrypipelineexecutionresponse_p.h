// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_RETRYPIPELINEEXECUTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class RetryPipelineExecutionResponse;

class RetryPipelineExecutionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit RetryPipelineExecutionResponsePrivate(RetryPipelineExecutionResponse * const q);

    void parseRetryPipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetryPipelineExecutionResponse)
    Q_DISABLE_COPY(RetryPipelineExecutionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
