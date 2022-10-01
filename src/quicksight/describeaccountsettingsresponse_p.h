// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTSETTINGSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSettingsResponse;

class DescribeAccountSettingsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeAccountSettingsResponsePrivate(DescribeAccountSettingsResponse * const q);

    void parseDescribeAccountSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountSettingsResponse)
    Q_DISABLE_COPY(DescribeAccountSettingsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
