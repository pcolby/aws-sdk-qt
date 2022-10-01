// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBEPIPELINEEXECUTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "describepipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineExecutionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribePipelineExecutionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribePipelineExecutionResponse(const DescribePipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelineExecutionResponse)
    Q_DISABLE_COPY(DescribePipelineExecutionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
