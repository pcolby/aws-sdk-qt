// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONRESPONSE_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskInvocationResponse;

class GetMaintenanceWindowExecutionTaskInvocationResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetMaintenanceWindowExecutionTaskInvocationResponsePrivate(GetMaintenanceWindowExecutionTaskInvocationResponse * const q);

    void parseGetMaintenanceWindowExecutionTaskInvocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionTaskInvocationResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowExecutionTaskInvocationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
