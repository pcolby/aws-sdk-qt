// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREFRESHSCHEMASSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEREFRESHSCHEMASSTATUSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeRefreshSchemasStatusResponse;

class DescribeRefreshSchemasStatusResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeRefreshSchemasStatusResponsePrivate(DescribeRefreshSchemasStatusResponse * const q);

    void parseDescribeRefreshSchemasStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRefreshSchemasStatusResponse)
    Q_DISABLE_COPY(DescribeRefreshSchemasStatusResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
