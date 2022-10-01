// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEREQUEST_P_H

#include "connectrequest_p.h"
#include "describeinstancerequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceRequest;

class DescribeInstanceRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeInstanceRequestPrivate(const ConnectRequest::Action action,
                                   DescribeInstanceRequest * const q);
    DescribeInstanceRequestPrivate(const DescribeInstanceRequestPrivate &other,
                                   DescribeInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
