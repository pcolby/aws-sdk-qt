// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbinstanceautomatedbackupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBInstanceAutomatedBackupsRequest;

class DescribeDBInstanceAutomatedBackupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBInstanceAutomatedBackupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBInstanceAutomatedBackupsRequest * const q);
    DescribeDBInstanceAutomatedBackupsRequestPrivate(const DescribeDBInstanceAutomatedBackupsRequestPrivate &other,
                                   DescribeDBInstanceAutomatedBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBInstanceAutomatedBackupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
