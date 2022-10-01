// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTTYPESRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTTYPESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointTypesResponse;

class DescribeEndpointTypesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeEndpointTypesResponsePrivate(DescribeEndpointTypesResponse * const q);

    void parseDescribeEndpointTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointTypesResponse)
    Q_DISABLE_COPY(DescribeEndpointTypesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
