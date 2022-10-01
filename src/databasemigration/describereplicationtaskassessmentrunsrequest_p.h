// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationtaskassessmentrunsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentRunsRequest;

class DescribeReplicationTaskAssessmentRunsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationTaskAssessmentRunsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationTaskAssessmentRunsRequest * const q);
    DescribeReplicationTaskAssessmentRunsRequestPrivate(const DescribeReplicationTaskAssessmentRunsRequestPrivate &other,
                                   DescribeReplicationTaskAssessmentRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskAssessmentRunsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
