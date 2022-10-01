// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsForTargetResponse;

class DescribeMaintenanceWindowsForTargetResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowsForTargetResponsePrivate(DescribeMaintenanceWindowsForTargetResponse * const q);

    void parseDescribeMaintenanceWindowsForTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowsForTargetResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowsForTargetResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
