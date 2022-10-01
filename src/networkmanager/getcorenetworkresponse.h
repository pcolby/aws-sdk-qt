// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKRESPONSE_H
#define QTAWS_GETCORENETWORKRESPONSE_H

#include "networkmanagerresponse.h"
#include "getcorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetCoreNetworkResponse(const GetCoreNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkResponse)
    Q_DISABLE_COPY(GetCoreNetworkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
