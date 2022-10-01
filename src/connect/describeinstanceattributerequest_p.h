// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEATTRIBUTEREQUEST_P_H

#include "connectrequest_p.h"
#include "describeinstanceattributerequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceAttributeRequest;

class DescribeInstanceAttributeRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeInstanceAttributeRequestPrivate(const ConnectRequest::Action action,
                                   DescribeInstanceAttributeRequest * const q);
    DescribeInstanceAttributeRequestPrivate(const DescribeInstanceAttributeRequestPrivate &other,
                                   DescribeInstanceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAttributeRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
