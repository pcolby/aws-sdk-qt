// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCESRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationinstancesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstancesResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationInstancesResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationInstancesResponse(const DescribeReplicationInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationInstancesResponse)
    Q_DISABLE_COPY(DescribeReplicationInstancesResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
