// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeorderablereplicationinstancesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeOrderableReplicationInstancesRequest;

class DescribeOrderableReplicationInstancesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeOrderableReplicationInstancesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeOrderableReplicationInstancesRequest * const q);
    DescribeOrderableReplicationInstancesRequestPrivate(const DescribeOrderableReplicationInstancesRequestPrivate &other,
                                   DescribeOrderableReplicationInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrderableReplicationInstancesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
