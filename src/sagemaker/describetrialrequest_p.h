// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALREQUEST_P_H
#define QTAWS_DESCRIBETRIALREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describetrialrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialRequest;

class DescribeTrialRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeTrialRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeTrialRequest * const q);
    DescribeTrialRequestPrivate(const DescribeTrialRequestPrivate &other,
                                   DescribeTrialRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
