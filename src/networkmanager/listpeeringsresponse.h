// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPEERINGSRESPONSE_H
#define QTAWS_LISTPEERINGSRESPONSE_H

#include "networkmanagerresponse.h"
#include "listpeeringsrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListPeeringsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ListPeeringsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ListPeeringsResponse(const ListPeeringsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPeeringsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPeeringsResponse)
    Q_DISABLE_COPY(ListPeeringsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
