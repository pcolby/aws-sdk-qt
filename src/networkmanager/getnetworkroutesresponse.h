// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKROUTESRESPONSE_H
#define QTAWS_GETNETWORKROUTESRESPONSE_H

#include "networkmanagerresponse.h"
#include "getnetworkroutesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkRoutesResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkRoutesResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetNetworkRoutesResponse(const GetNetworkRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkRoutesResponse)
    Q_DISABLE_COPY(GetNetworkRoutesResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
