// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemaObjectSummaryResponse;

class DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate(DescribeFleetAdvisorSchemaObjectSummaryResponse * const q);

    void parseDescribeFleetAdvisorSchemaObjectSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorSchemaObjectSummaryResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
