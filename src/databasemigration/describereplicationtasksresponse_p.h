// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTasksResponse;

class DescribeReplicationTasksResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeReplicationTasksResponsePrivate(DescribeReplicationTasksResponse * const q);

    void parseDescribeReplicationTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTasksResponse)
    Q_DISABLE_COPY(DescribeReplicationTasksResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
