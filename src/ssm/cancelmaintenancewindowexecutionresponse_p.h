// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONRESPONSE_P_H
#define QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CancelMaintenanceWindowExecutionResponse;

class CancelMaintenanceWindowExecutionResponsePrivate : public SsmResponsePrivate {

public:

    explicit CancelMaintenanceWindowExecutionResponsePrivate(CancelMaintenanceWindowExecutionResponse * const q);

    void parseCancelMaintenanceWindowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelMaintenanceWindowExecutionResponse)
    Q_DISABLE_COPY(CancelMaintenanceWindowExecutionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
