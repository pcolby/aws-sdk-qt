// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationtaskassessmentrunsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentRunsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTaskAssessmentRunsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationTaskAssessmentRunsResponse(const DescribeReplicationTaskAssessmentRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationTaskAssessmentRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTaskAssessmentRunsResponse)
    Q_DISABLE_COPY(DescribeReplicationTaskAssessmentRunsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
