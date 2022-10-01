// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLESTATISTICSRESPONSE_H
#define QTAWS_DESCRIBETABLESTATISTICSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describetablestatisticsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeTableStatisticsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeTableStatisticsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeTableStatisticsResponse(const DescribeTableStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTableStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableStatisticsResponse)
    Q_DISABLE_COPY(DescribeTableStatisticsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
