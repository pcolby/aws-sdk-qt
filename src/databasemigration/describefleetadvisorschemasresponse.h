// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMASRESPONSE_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMASRESPONSE_H

#include "databasemigrationresponse.h"
#include "describefleetadvisorschemasrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemasResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorSchemasResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeFleetAdvisorSchemasResponse(const DescribeFleetAdvisorSchemasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetAdvisorSchemasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorSchemasResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorSchemasResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
