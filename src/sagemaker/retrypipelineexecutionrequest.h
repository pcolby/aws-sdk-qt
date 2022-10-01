// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYPIPELINEEXECUTIONREQUEST_H
#define QTAWS_RETRYPIPELINEEXECUTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class RetryPipelineExecutionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT RetryPipelineExecutionRequest : public SageMakerRequest {

public:
    RetryPipelineExecutionRequest(const RetryPipelineExecutionRequest &other);
    RetryPipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryPipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
