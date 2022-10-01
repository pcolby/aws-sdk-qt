// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class RegisterTaskWithMaintenanceWindowResponse;

class RegisterTaskWithMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit RegisterTaskWithMaintenanceWindowResponsePrivate(RegisterTaskWithMaintenanceWindowResponse * const q);

    void parseRegisterTaskWithMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTaskWithMaintenanceWindowResponse)
    Q_DISABLE_COPY(RegisterTaskWithMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
