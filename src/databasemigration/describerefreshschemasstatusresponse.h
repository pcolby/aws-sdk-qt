// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREFRESHSCHEMASSTATUSRESPONSE_H
#define QTAWS_DESCRIBEREFRESHSCHEMASSTATUSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describerefreshschemasstatusrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeRefreshSchemasStatusResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeRefreshSchemasStatusResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeRefreshSchemasStatusResponse(const DescribeRefreshSchemasStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRefreshSchemasStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRefreshSchemasStatusResponse)
    Q_DISABLE_COPY(DescribeRefreshSchemasStatusResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
