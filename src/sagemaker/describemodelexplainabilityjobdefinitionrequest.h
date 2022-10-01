// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_H
#define QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelExplainabilityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelExplainabilityJobDefinitionRequest : public SageMakerRequest {

public:
    DescribeModelExplainabilityJobDefinitionRequest(const DescribeModelExplainabilityJobDefinitionRequest &other);
    DescribeModelExplainabilityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelExplainabilityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
