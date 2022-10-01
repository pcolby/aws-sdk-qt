// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYREQUEST_P_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describefleetadvisorschemaobjectsummaryrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemaObjectSummaryRequest;

class DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeFleetAdvisorSchemaObjectSummaryRequest * const q);
    DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(const DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate &other,
                                   DescribeFleetAdvisorSchemaObjectSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorSchemaObjectSummaryRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
