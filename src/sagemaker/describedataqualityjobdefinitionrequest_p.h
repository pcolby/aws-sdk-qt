// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAQUALITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBEDATAQUALITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describedataqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeDataQualityJobDefinitionRequest;

class DescribeDataQualityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeDataQualityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeDataQualityJobDefinitionRequest * const q);
    DescribeDataQualityJobDefinitionRequestPrivate(const DescribeDataQualityJobDefinitionRequestPrivate &other,
                                   DescribeDataQualityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
