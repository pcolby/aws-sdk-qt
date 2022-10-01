// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTARGETRESPONSE_P_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTARGETRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTargetResponse;

class UpdateMaintenanceWindowTargetResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateMaintenanceWindowTargetResponsePrivate(UpdateMaintenanceWindowTargetResponse * const q);

    void parseUpdateMaintenanceWindowTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceWindowTargetResponse)
    Q_DISABLE_COPY(UpdateMaintenanceWindowTargetResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
