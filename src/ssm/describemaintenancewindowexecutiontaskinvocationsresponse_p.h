// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTaskInvocationsResponse;

class DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate(DescribeMaintenanceWindowExecutionTaskInvocationsResponse * const q);

    void parseDescribeMaintenanceWindowExecutionTaskInvocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowExecutionTaskInvocationsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
