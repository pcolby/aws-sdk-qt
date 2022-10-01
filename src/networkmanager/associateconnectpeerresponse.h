// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTPEERRESPONSE_H
#define QTAWS_ASSOCIATECONNECTPEERRESPONSE_H

#include "networkmanagerresponse.h"
#include "associateconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateConnectPeerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateConnectPeerResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    AssociateConnectPeerResponse(const AssociateConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConnectPeerResponse)
    Q_DISABLE_COPY(AssociateConnectPeerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
