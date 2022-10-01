// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONRESPONSE_H
#define QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describepipelinedefinitionforexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineDefinitionForExecutionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribePipelineDefinitionForExecutionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribePipelineDefinitionForExecutionResponse(const DescribePipelineDefinitionForExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePipelineDefinitionForExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelineDefinitionForExecutionResponse)
    Q_DISABLE_COPY(DescribePipelineDefinitionForExecutionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
