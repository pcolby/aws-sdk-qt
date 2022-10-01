// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALCOMPONENTREQUEST_P_H
#define QTAWS_DESCRIBETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialComponentRequest;

class DescribeTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeTrialComponentRequest * const q);
    DescribeTrialComponentRequestPrivate(const DescribeTrialComponentRequestPrivate &other,
                                   DescribeTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
