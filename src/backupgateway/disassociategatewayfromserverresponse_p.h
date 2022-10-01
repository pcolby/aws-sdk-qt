// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGATEWAYFROMSERVERRESPONSE_P_H
#define QTAWS_DISASSOCIATEGATEWAYFROMSERVERRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class DisassociateGatewayFromServerResponse;

class DisassociateGatewayFromServerResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit DisassociateGatewayFromServerResponsePrivate(DisassociateGatewayFromServerResponse * const q);

    void parseDisassociateGatewayFromServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateGatewayFromServerResponse)
    Q_DISABLE_COPY(DisassociateGatewayFromServerResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
