// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYRESPONSE_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYRESPONSE_H

#include "databasemigrationresponse.h"
#include "describefleetadvisorschemaobjectsummaryrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorSchemaObjectSummaryResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeFleetAdvisorSchemaObjectSummaryResponse(const DescribeFleetAdvisorSchemaObjectSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetAdvisorSchemaObjectSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorSchemaObjectSummaryResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorSchemaObjectSummaryResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
