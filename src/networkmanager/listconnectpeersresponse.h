// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTPEERSRESPONSE_H
#define QTAWS_LISTCONNECTPEERSRESPONSE_H

#include "networkmanagerresponse.h"
#include "listconnectpeersrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListConnectPeersResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ListConnectPeersResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ListConnectPeersResponse(const ListConnectPeersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConnectPeersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectPeersResponse)
    Q_DISABLE_COPY(ListConnectPeersResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
