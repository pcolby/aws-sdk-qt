// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTasksResponse;

class DescribeMaintenanceWindowExecutionTasksResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowExecutionTasksResponsePrivate(DescribeMaintenanceWindowExecutionTasksResponse * const q);

    void parseDescribeMaintenanceWindowExecutionTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowExecutionTasksResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowExecutionTasksResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
