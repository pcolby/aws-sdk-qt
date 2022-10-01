// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentResultsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTaskAssessmentResultsRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationTaskAssessmentResultsRequest(const DescribeReplicationTaskAssessmentResultsRequest &other);
    DescribeReplicationTaskAssessmentResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTaskAssessmentResultsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
