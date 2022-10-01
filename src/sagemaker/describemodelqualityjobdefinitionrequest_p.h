// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBEMODELQUALITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemodelqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelQualityJobDefinitionRequest;

class DescribeModelQualityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeModelQualityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeModelQualityJobDefinitionRequest * const q);
    DescribeModelQualityJobDefinitionRequestPrivate(const DescribeModelQualityJobDefinitionRequestPrivate &other,
                                   DescribeModelQualityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
