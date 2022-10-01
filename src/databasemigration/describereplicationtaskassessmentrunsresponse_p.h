// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRUNSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskAssessmentRunsResponse;

class DescribeReplicationTaskAssessmentRunsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationTaskAssessmentRunsResponsePrivate(DescribeReplicationTaskAssessmentRunsResponse * const q);

    void parseDescribeReplicationTaskAssessmentRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskAssessmentRunsResponse)
    Q_DISABLE_COPY(DescribeReplicationTaskAssessmentRunsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
