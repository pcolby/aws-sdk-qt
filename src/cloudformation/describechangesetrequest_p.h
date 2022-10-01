// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETREQUEST_P_H
#define QTAWS_DESCRIBECHANGESETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetRequest;

class DescribeChangeSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeChangeSetRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeChangeSetRequest * const q);
    DescribeChangeSetRequestPrivate(const DescribeChangeSetRequestPrivate &other,
                                   DescribeChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
