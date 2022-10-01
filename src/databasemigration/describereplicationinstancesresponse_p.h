// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstancesResponse;

class DescribeReplicationInstancesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationInstancesResponsePrivate(DescribeReplicationInstancesResponse * const q);

    void parseDescribeReplicationInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationInstancesResponse)
    Q_DISABLE_COPY(DescribeReplicationInstancesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
