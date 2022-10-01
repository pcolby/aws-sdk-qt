// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEGATEWAYTOSERVERRESPONSE_P_H
#define QTAWS_ASSOCIATEGATEWAYTOSERVERRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class AssociateGatewayToServerResponse;

class AssociateGatewayToServerResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit AssociateGatewayToServerResponsePrivate(AssociateGatewayToServerResponse * const q);

    void parseAssociateGatewayToServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateGatewayToServerResponse)
    Q_DISABLE_COPY(AssociateGatewayToServerResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
