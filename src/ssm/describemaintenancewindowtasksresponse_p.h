// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTasksResponse;

class DescribeMaintenanceWindowTasksResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowTasksResponsePrivate(DescribeMaintenanceWindowTasksResponse * const q);

    void parseDescribeMaintenanceWindowTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowTasksResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowTasksResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
