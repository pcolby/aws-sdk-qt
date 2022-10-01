// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERRESPONSE_H
#define QTAWS_GETCONNECTPEERRESPONSE_H

#include "networkmanagerresponse.h"
#include "getconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetConnectPeerResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetConnectPeerResponse(const GetConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectPeerResponse)
    Q_DISABLE_COPY(GetConnectPeerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
