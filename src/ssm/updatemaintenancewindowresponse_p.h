// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_UPDATEMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowResponse;

class UpdateMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateMaintenanceWindowResponsePrivate(UpdateMaintenanceWindowResponse * const q);

    void parseUpdateMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceWindowResponse)
    Q_DISABLE_COPY(UpdateMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
