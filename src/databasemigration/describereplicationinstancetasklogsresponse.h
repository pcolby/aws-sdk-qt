// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationinstancetasklogsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstanceTaskLogsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationInstanceTaskLogsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationInstanceTaskLogsResponse(const DescribeReplicationInstanceTaskLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationInstanceTaskLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationInstanceTaskLogsResponse)
    Q_DISABLE_COPY(DescribeReplicationInstanceTaskLogsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
