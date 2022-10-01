// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONTASKSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationtasksrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTasksResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTasksResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationTasksResponse(const DescribeReplicationTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTasksResponse)
    Q_DISABLE_COPY(DescribeReplicationTasksResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
