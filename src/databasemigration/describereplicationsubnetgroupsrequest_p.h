// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationsubnetgroupsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationSubnetGroupsRequest;

class DescribeReplicationSubnetGroupsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationSubnetGroupsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationSubnetGroupsRequest * const q);
    DescribeReplicationSubnetGroupsRequestPrivate(const DescribeReplicationSubnetGroupsRequestPrivate &other,
                                   DescribeReplicationSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationSubnetGroupsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
