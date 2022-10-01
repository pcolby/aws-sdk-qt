// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORCOLLECTORSRESPONSE_H
#define QTAWS_DESCRIBEFLEETADVISORCOLLECTORSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describefleetadvisorcollectorsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorCollectorsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorCollectorsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeFleetAdvisorCollectorsResponse(const DescribeFleetAdvisorCollectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetAdvisorCollectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorCollectorsResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorCollectorsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
