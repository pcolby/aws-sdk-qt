// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLESTATISTICSRESPONSE_P_H
#define QTAWS_DESCRIBETABLESTATISTICSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeTableStatisticsResponse;

class DescribeTableStatisticsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeTableStatisticsResponsePrivate(DescribeTableStatisticsResponse * const q);

    void parseDescribeTableStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTableStatisticsResponse)
    Q_DISABLE_COPY(DescribeTableStatisticsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
