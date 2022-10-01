// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstanceTaskLogsResponse;

class DescribeReplicationInstanceTaskLogsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationInstanceTaskLogsResponsePrivate(DescribeReplicationInstanceTaskLogsResponse * const q);

    void parseDescribeReplicationInstanceTaskLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationInstanceTaskLogsResponse)
    Q_DISABLE_COPY(DescribeReplicationInstanceTaskLogsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
