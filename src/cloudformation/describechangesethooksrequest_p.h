// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETHOOKSREQUEST_P_H
#define QTAWS_DESCRIBECHANGESETHOOKSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describechangesethooksrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetHooksRequest;

class DescribeChangeSetHooksRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeChangeSetHooksRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeChangeSetHooksRequest * const q);
    DescribeChangeSetHooksRequestPrivate(const DescribeChangeSetHooksRequestPrivate &other,
                                   DescribeChangeSetHooksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChangeSetHooksRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
