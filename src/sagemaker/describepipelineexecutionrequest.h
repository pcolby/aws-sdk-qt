// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEEXECUTIONREQUEST_H
#define QTAWS_DESCRIBEPIPELINEEXECUTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineExecutionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribePipelineExecutionRequest : public SageMakerRequest {

public:
    DescribePipelineExecutionRequest(const DescribePipelineExecutionRequest &other);
    DescribePipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
