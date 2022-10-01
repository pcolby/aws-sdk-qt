// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBETHEMEPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemePermissionsResponse;

class DescribeThemePermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeThemePermissionsResponsePrivate(DescribeThemePermissionsResponse * const q);

    void parseDescribeThemePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThemePermissionsResponse)
    Q_DISABLE_COPY(DescribeThemePermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
