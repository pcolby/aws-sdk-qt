// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKRESPONSE_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskResponse;

class GetMaintenanceWindowExecutionTaskResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetMaintenanceWindowExecutionTaskResponsePrivate(GetMaintenanceWindowExecutionTaskResponse * const q);

    void parseGetMaintenanceWindowExecutionTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionTaskResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowExecutionTaskResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
