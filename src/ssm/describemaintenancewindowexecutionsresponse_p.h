// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionsResponse;

class DescribeMaintenanceWindowExecutionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowExecutionsResponsePrivate(DescribeMaintenanceWindowExecutionsResponse * const q);

    void parseDescribeMaintenanceWindowExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowExecutionsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowExecutionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
