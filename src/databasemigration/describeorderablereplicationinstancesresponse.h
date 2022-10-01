// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEORDERABLEREPLICATIONINSTANCESRESPONSE_H

#include "databasemigrationresponse.h"
#include "describeorderablereplicationinstancesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeOrderableReplicationInstancesResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeOrderableReplicationInstancesResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeOrderableReplicationInstancesResponse(const DescribeOrderableReplicationInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrderableReplicationInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrderableReplicationInstancesResponse)
    Q_DISABLE_COPY(DescribeOrderableReplicationInstancesResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
