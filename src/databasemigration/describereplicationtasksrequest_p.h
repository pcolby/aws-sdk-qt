// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationtasksrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTasksRequest;

class DescribeReplicationTasksRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationTasksRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationTasksRequest * const q);
    DescribeReplicationTasksRequestPrivate(const DescribeReplicationTasksRequestPrivate &other,
                                   DescribeReplicationTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTasksRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
