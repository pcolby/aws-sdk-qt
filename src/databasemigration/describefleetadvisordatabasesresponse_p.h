// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORDATABASESRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETADVISORDATABASESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorDatabasesResponse;

class DescribeFleetAdvisorDatabasesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeFleetAdvisorDatabasesResponsePrivate(DescribeFleetAdvisorDatabasesResponse * const q);

    void parseDescribeFleetAdvisorDatabasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorDatabasesResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorDatabasesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
