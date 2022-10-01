// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentResultsResponse;

class DescribeReplicationTaskAssessmentResultsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationTaskAssessmentResultsResponsePrivate(DescribeReplicationTaskAssessmentResultsResponse * const q);

    void parseDescribeReplicationTaskAssessmentResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskAssessmentResultsResponse)
    Q_DISABLE_COPY(DescribeReplicationTaskAssessmentResultsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
