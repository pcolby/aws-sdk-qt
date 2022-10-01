// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMASRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMASRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemasResponse;

class DescribeFleetAdvisorSchemasResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeFleetAdvisorSchemasResponsePrivate(DescribeFleetAdvisorSchemasResponse * const q);

    void parseDescribeFleetAdvisorSchemasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorSchemasResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorSchemasResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
