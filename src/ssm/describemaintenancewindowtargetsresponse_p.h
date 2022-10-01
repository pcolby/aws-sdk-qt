// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTargetsResponse;

class DescribeMaintenanceWindowTargetsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowTargetsResponsePrivate(DescribeMaintenanceWindowTargetsResponse * const q);

    void parseDescribeMaintenanceWindowTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowTargetsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowTargetsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
