// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONRESPONSE_H
#define QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONRESPONSE_H

#include "sagemakerresponse.h"
#include "listpipelineparametersforexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineParametersForExecutionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListPipelineParametersForExecutionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListPipelineParametersForExecutionResponse(const ListPipelineParametersForExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPipelineParametersForExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelineParametersForExecutionResponse)
    Q_DISABLE_COPY(ListPipelineParametersForExecutionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
