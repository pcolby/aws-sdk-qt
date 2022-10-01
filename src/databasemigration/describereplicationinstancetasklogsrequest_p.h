// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationinstancetasklogsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstanceTaskLogsRequest;

class DescribeReplicationInstanceTaskLogsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationInstanceTaskLogsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationInstanceTaskLogsRequest * const q);
    DescribeReplicationInstanceTaskLogsRequestPrivate(const DescribeReplicationInstanceTaskLogsRequestPrivate &other,
                                   DescribeReplicationInstanceTaskLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationInstanceTaskLogsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
