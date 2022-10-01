// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsResponse;

class DescribeMaintenanceWindowsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowsResponsePrivate(DescribeMaintenanceWindowsResponse * const q);

    void parseDescribeMaintenanceWindowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
