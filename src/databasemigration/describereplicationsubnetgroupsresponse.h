// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationsubnetgroupsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationSubnetGroupsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationSubnetGroupsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationSubnetGroupsResponse(const DescribeReplicationSubnetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationSubnetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeReplicationSubnetGroupsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
