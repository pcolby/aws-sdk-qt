// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAINTENANCESTARTTIMERESPONSE_P_H
#define QTAWS_PUTMAINTENANCESTARTTIMERESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class PutMaintenanceStartTimeResponse;

class PutMaintenanceStartTimeResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit PutMaintenanceStartTimeResponsePrivate(PutMaintenanceStartTimeResponse * const q);

    void parsePutMaintenanceStartTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMaintenanceStartTimeResponse)
    Q_DISABLE_COPY(PutMaintenanceStartTimeResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
