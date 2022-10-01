// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDATASOURCEPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourcePermissionsResponse;

class DescribeDataSourcePermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeDataSourcePermissionsResponsePrivate(DescribeDataSourcePermissionsResponse * const q);

    void parseDescribeDataSourcePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSourcePermissionsResponse)
    Q_DISABLE_COPY(DescribeDataSourcePermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
