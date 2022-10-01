// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationtaskassessmentresultsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentResultsRequest;

class DescribeReplicationTaskAssessmentResultsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationTaskAssessmentResultsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationTaskAssessmentResultsRequest * const q);
    DescribeReplicationTaskAssessmentResultsRequestPrivate(const DescribeReplicationTaskAssessmentResultsRequestPrivate &other,
                                   DescribeReplicationTaskAssessmentResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskAssessmentResultsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
