// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeregisterTaskFromMaintenanceWindowResponse;

class DeregisterTaskFromMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeregisterTaskFromMaintenanceWindowResponsePrivate(DeregisterTaskFromMaintenanceWindowResponse * const q);

    void parseDeregisterTaskFromMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTaskFromMaintenanceWindowResponse)
    Q_DISABLE_COPY(DeregisterTaskFromMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
