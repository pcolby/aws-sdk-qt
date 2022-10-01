// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICABLEINDIVIDUALASSESSMENTSREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICABLEINDIVIDUALASSESSMENTSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeapplicableindividualassessmentsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeApplicableIndividualAssessmentsRequest;

class DescribeApplicableIndividualAssessmentsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeApplicableIndividualAssessmentsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeApplicableIndividualAssessmentsRequest * const q);
    DescribeApplicableIndividualAssessmentsRequestPrivate(const DescribeApplicableIndividualAssessmentsRequestPrivate &other,
                                   DescribeApplicableIndividualAssessmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicableIndividualAssessmentsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
