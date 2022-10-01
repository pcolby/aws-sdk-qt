// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDATASETPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetPermissionsResponse;

class DescribeDataSetPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeDataSetPermissionsResponsePrivate(DescribeDataSetPermissionsResponse * const q);

    void parseDescribeDataSetPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSetPermissionsResponse)
    Q_DISABLE_COPY(DescribeDataSetPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
