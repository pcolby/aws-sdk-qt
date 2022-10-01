// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCESTARTTIMERESPONSE_P_H
#define QTAWS_UPDATEMAINTENANCESTARTTIMERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateMaintenanceStartTimeResponse;

class UpdateMaintenanceStartTimeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateMaintenanceStartTimeResponsePrivate(UpdateMaintenanceStartTimeResponse * const q);

    void parseUpdateMaintenanceStartTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceStartTimeResponse)
    Q_DISABLE_COPY(UpdateMaintenanceStartTimeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
