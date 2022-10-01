// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMASREQUEST_P_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMASREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describefleetadvisorschemasrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemasRequest;

class DescribeFleetAdvisorSchemasRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeFleetAdvisorSchemasRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeFleetAdvisorSchemasRequest * const q);
    DescribeFleetAdvisorSchemasRequestPrivate(const DescribeFleetAdvisorSchemasRequestPrivate &other,
                                   DescribeFleetAdvisorSchemasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorSchemasRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
