// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKINSTANCEREQUEST_P_H
#define QTAWS_DESCRIBESTACKINSTANCEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestackinstancerequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackInstanceRequest;

class DescribeStackInstanceRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackInstanceRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackInstanceRequest * const q);
    DescribeStackInstanceRequestPrivate(const DescribeStackInstanceRequestPrivate &other,
                                   DescribeStackInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackInstanceRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
