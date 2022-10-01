// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentRunsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTaskAssessmentRunsRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationTaskAssessmentRunsRequest(const DescribeReplicationTaskAssessmentRunsRequest &other);
    DescribeReplicationTaskAssessmentRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTaskAssessmentRunsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
