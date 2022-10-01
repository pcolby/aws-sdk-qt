// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORDATABASESREQUEST_P_H
#define QTAWS_DESCRIBEFLEETADVISORDATABASESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describefleetadvisordatabasesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorDatabasesRequest;

class DescribeFleetAdvisorDatabasesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeFleetAdvisorDatabasesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeFleetAdvisorDatabasesRequest * const q);
    DescribeFleetAdvisorDatabasesRequestPrivate(const DescribeFleetAdvisorDatabasesRequestPrivate &other,
                                   DescribeFleetAdvisorDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorDatabasesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
