// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCERESPONSE_H
#define QTAWS_GETNETWORKRESOURCERESPONSE_H

#include "privatenetworksresponse.h"
#include "getnetworkresourcerequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkResourceResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetNetworkResourceResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    GetNetworkResourceResponse(const GetNetworkResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourceResponse)
    Q_DISABLE_COPY(GetNetworkResourceResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
