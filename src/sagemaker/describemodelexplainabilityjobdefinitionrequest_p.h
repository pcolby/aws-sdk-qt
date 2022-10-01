// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemodelexplainabilityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelExplainabilityJobDefinitionRequest;

class DescribeModelExplainabilityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeModelExplainabilityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeModelExplainabilityJobDefinitionRequest * const q);
    DescribeModelExplainabilityJobDefinitionRequestPrivate(const DescribeModelExplainabilityJobDefinitionRequestPrivate &other,
                                   DescribeModelExplainabilityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelExplainabilityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
