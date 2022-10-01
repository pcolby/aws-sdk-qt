// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETREQUEST_P_H
#define QTAWS_DESCRIBESTACKSETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetRequest;

class DescribeStackSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackSetRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackSetRequest * const q);
    DescribeStackSetRequestPrivate(const DescribeStackSetRequestPrivate &other,
                                   DescribeStackSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
