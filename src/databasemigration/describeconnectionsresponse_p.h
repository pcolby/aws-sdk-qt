// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTIONSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeConnectionsResponse;

class DescribeConnectionsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeConnectionsResponsePrivate(DescribeConnectionsResponse * const q);

    void parseDescribeConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionsResponse)
    Q_DISABLE_COPY(DescribeConnectionsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
