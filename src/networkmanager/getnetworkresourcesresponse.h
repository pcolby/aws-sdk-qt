// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCESRESPONSE_H
#define QTAWS_GETNETWORKRESOURCESRESPONSE_H

#include "networkmanagerresponse.h"
#include "getnetworkresourcesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourcesResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkResourcesResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetNetworkResourcesResponse(const GetNetworkResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourcesResponse)
    Q_DISABLE_COPY(GetNetworkResourcesResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
