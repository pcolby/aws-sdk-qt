// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIRTUALMACHINERESPONSE_P_H
#define QTAWS_GETVIRTUALMACHINERESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class GetVirtualMachineResponse;

class GetVirtualMachineResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit GetVirtualMachineResponsePrivate(GetVirtualMachineResponse * const q);

    void parseGetVirtualMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVirtualMachineResponse)
    Q_DISABLE_COPY(GetVirtualMachineResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
