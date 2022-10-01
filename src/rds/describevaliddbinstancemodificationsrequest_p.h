// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describevaliddbinstancemodificationsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeValidDBInstanceModificationsRequest;

class DescribeValidDBInstanceModificationsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeValidDBInstanceModificationsRequestPrivate(const RdsRequest::Action action,
                                   DescribeValidDBInstanceModificationsRequest * const q);
    DescribeValidDBInstanceModificationsRequestPrivate(const DescribeValidDBInstanceModificationsRequestPrivate &other,
                                   DescribeValidDBInstanceModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeValidDBInstanceModificationsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
