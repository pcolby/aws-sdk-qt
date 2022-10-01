// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETOPERATIONREQUEST_P_H
#define QTAWS_DESCRIBESTACKSETOPERATIONREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestacksetoperationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetOperationRequest;

class DescribeStackSetOperationRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackSetOperationRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackSetOperationRequest * const q);
    DescribeStackSetOperationRequestPrivate(const DescribeStackSetOperationRequestPrivate &other,
                                   DescribeStackSetOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackSetOperationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
