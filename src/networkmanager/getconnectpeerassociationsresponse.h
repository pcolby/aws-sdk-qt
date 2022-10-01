// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERASSOCIATIONSRESPONSE_H
#define QTAWS_GETCONNECTPEERASSOCIATIONSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getconnectpeerassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerAssociationsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetConnectPeerAssociationsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetConnectPeerAssociationsResponse(const GetConnectPeerAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectPeerAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectPeerAssociationsResponse)
    Q_DISABLE_COPY(GetConnectPeerAssociationsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
