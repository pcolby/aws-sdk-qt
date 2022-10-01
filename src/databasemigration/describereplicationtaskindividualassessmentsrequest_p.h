// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describereplicationtaskindividualassessmentsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskIndividualAssessmentsRequest;

class DescribeReplicationTaskIndividualAssessmentsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeReplicationTaskIndividualAssessmentsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeReplicationTaskIndividualAssessmentsRequest * const q);
    DescribeReplicationTaskIndividualAssessmentsRequestPrivate(const DescribeReplicationTaskIndividualAssessmentsRequestPrivate &other,
                                   DescribeReplicationTaskIndividualAssessmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskIndividualAssessmentsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
