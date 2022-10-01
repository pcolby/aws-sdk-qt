// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICABLEINDIVIDUALASSESSMENTSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICABLEINDIVIDUALASSESSMENTSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeApplicableIndividualAssessmentsResponse;

class DescribeApplicableIndividualAssessmentsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeApplicableIndividualAssessmentsResponsePrivate(DescribeApplicableIndividualAssessmentsResponse * const q);

    void parseDescribeApplicableIndividualAssessmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicableIndividualAssessmentsResponse)
    Q_DISABLE_COPY(DescribeApplicableIndividualAssessmentsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
