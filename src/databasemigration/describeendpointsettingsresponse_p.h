// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTSETTINGSRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointSettingsResponse;

class DescribeEndpointSettingsResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeEndpointSettingsResponsePrivate(DescribeEndpointSettingsResponse * const q);

    void parseDescribeEndpointSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointSettingsResponse)
    Q_DISABLE_COPY(DescribeEndpointSettingsResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
