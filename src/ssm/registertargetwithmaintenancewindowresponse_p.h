// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class RegisterTargetWithMaintenanceWindowResponse;

class RegisterTargetWithMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit RegisterTargetWithMaintenanceWindowResponsePrivate(RegisterTargetWithMaintenanceWindowResponse * const q);

    void parseRegisterTargetWithMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTargetWithMaintenanceWindowResponse)
    Q_DISABLE_COPY(RegisterTargetWithMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
