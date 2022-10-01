// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORDATABASESRESPONSE_H
#define QTAWS_DESCRIBEFLEETADVISORDATABASESRESPONSE_H

#include "databasemigrationresponse.h"
#include "describefleetadvisordatabasesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorDatabasesResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorDatabasesResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeFleetAdvisorDatabasesResponse(const DescribeFleetAdvisorDatabasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetAdvisorDatabasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorDatabasesResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorDatabasesResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
