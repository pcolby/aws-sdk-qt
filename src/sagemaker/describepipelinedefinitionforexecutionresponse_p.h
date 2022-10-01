// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineDefinitionForExecutionResponse;

class DescribePipelineDefinitionForExecutionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribePipelineDefinitionForExecutionResponsePrivate(DescribePipelineDefinitionForExecutionResponse * const q);

    void parseDescribePipelineDefinitionForExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePipelineDefinitionForExecutionResponse)
    Q_DISABLE_COPY(DescribePipelineDefinitionForExecutionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
