// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWDEFINITIONREQUEST_H
#define QTAWS_DESCRIBEFLOWDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFlowDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeFlowDefinitionRequest : public SageMakerRequest {

public:
    DescribeFlowDefinitionRequest(const DescribeFlowDefinitionRequest &other);
    DescribeFlowDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
