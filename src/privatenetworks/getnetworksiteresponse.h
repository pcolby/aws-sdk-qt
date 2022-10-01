// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSITERESPONSE_H
#define QTAWS_GETNETWORKSITERESPONSE_H

#include "privatenetworksresponse.h"
#include "getnetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkSiteResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetNetworkSiteResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    GetNetworkSiteResponse(const GetNetworkSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkSiteResponse)
    Q_DISABLE_COPY(GetNetworkSiteResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
