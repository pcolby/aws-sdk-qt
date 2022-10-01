// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBEFLOWDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeflowdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFlowDefinitionRequest;

class DescribeFlowDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeFlowDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeFlowDefinitionRequest * const q);
    DescribeFlowDefinitionRequestPrivate(const DescribeFlowDefinitionRequestPrivate &other,
                                   DescribeFlowDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFlowDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
