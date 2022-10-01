// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORCOLLECTORSRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETADVISORCOLLECTORSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorCollectorsResponse;

class DescribeFleetAdvisorCollectorsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeFleetAdvisorCollectorsResponsePrivate(DescribeFleetAdvisorCollectorsResponse * const q);

    void parseDescribeFleetAdvisorCollectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorCollectorsResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorCollectorsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
