// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationtaskassessmentresultsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentResultsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTaskAssessmentResultsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationTaskAssessmentResultsResponse(const DescribeReplicationTaskAssessmentResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationTaskAssessmentResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTaskAssessmentResultsResponse)
    Q_DISABLE_COPY(DescribeReplicationTaskAssessmentResultsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
