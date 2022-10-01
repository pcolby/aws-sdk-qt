// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTPEERRESPONSE_H
#define QTAWS_DISASSOCIATECONNECTPEERRESPONSE_H

#include "networkmanagerresponse.h"
#include "disassociateconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateConnectPeerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateConnectPeerResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DisassociateConnectPeerResponse(const DisassociateConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectPeerResponse)
    Q_DISABLE_COPY(DisassociateConnectPeerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
