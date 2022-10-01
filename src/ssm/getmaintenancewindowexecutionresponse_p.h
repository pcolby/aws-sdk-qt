// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONRESPONSE_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionResponse;

class GetMaintenanceWindowExecutionResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetMaintenanceWindowExecutionResponsePrivate(GetMaintenanceWindowExecutionResponse * const q);

    void parseGetMaintenanceWindowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowExecutionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
