// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETSREQUEST_P_H
#define QTAWS_DESCRIBEDBPROXYTARGETSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbproxytargetsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetsRequest;

class DescribeDBProxyTargetsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBProxyTargetsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBProxyTargetsRequest * const q);
    DescribeDBProxyTargetsRequestPrivate(const DescribeDBProxyTargetsRequestPrivate &other,
                                   DescribeDBProxyTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxyTargetsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
