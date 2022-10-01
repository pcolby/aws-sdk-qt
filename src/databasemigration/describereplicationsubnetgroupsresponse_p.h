// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationSubnetGroupsResponse;

class DescribeReplicationSubnetGroupsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationSubnetGroupsResponsePrivate(DescribeReplicationSubnetGroupsResponse * const q);

    void parseDescribeReplicationSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeReplicationSubnetGroupsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
