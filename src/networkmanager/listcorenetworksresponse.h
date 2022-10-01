// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKSRESPONSE_H
#define QTAWS_LISTCORENETWORKSRESPONSE_H

#include "networkmanagerresponse.h"
#include "listcorenetworksrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworksResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ListCoreNetworksResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ListCoreNetworksResponse(const ListCoreNetworksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCoreNetworksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreNetworksResponse)
    Q_DISABLE_COPY(ListCoreNetworksResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
