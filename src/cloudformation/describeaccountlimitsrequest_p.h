// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describeaccountlimitsrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeAccountLimitsRequest;

class DescribeAccountLimitsRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeAccountLimitsRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeAccountLimitsRequest * const q);
    DescribeAccountLimitsRequestPrivate(const DescribeAccountLimitsRequestPrivate &other,
                                   DescribeAccountLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountLimitsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
