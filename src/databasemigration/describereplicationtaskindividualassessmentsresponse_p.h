// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskIndividualAssessmentsResponse;

class DescribeReplicationTaskIndividualAssessmentsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationTaskIndividualAssessmentsResponsePrivate(DescribeReplicationTaskIndividualAssessmentsResponse * const q);

    void parseDescribeReplicationTaskIndividualAssessmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskIndividualAssessmentsResponse)
    Q_DISABLE_COPY(DescribeReplicationTaskIndividualAssessmentsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
