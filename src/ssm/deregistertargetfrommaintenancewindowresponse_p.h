// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETFROMMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_DEREGISTERTARGETFROMMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeregisterTargetFromMaintenanceWindowResponse;

class DeregisterTargetFromMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeregisterTargetFromMaintenanceWindowResponsePrivate(DeregisterTargetFromMaintenanceWindowResponse * const q);

    void parseDeregisterTargetFromMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTargetFromMaintenanceWindowResponse)
    Q_DISABLE_COPY(DeregisterTargetFromMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
