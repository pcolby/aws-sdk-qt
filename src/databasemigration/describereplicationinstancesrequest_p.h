// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationinstancesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstancesRequest;

class DescribeReplicationInstancesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationInstancesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationInstancesRequest * const q);
    DescribeReplicationInstancesRequestPrivate(const DescribeReplicationInstancesRequestPrivate &other,
                                   DescribeReplicationInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationInstancesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
