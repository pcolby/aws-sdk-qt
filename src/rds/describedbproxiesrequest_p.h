// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXIESREQUEST_P_H
#define QTAWS_DESCRIBEDBPROXIESREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbproxiesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxiesRequest;

class DescribeDBProxiesRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBProxiesRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBProxiesRequest * const q);
    DescribeDBProxiesRequestPrivate(const DescribeDBProxiesRequestPrivate &other,
                                   DescribeDBProxiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxiesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
