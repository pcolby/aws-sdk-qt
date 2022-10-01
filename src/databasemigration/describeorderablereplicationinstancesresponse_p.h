// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeOrderableReplicationInstancesResponse;

class DescribeOrderableReplicationInstancesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeOrderableReplicationInstancesResponsePrivate(DescribeOrderableReplicationInstancesResponse * const q);

    void parseDescribeOrderableReplicationInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrderableReplicationInstancesResponse)
    Q_DISABLE_COPY(DescribeOrderableReplicationInstancesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
