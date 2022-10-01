// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONREQUEST_H
#define QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineParametersForExecutionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListPipelineParametersForExecutionRequest : public SageMakerRequest {

public:
    ListPipelineParametersForExecutionRequest(const ListPipelineParametersForExecutionRequest &other);
    ListPipelineParametersForExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelineParametersForExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
