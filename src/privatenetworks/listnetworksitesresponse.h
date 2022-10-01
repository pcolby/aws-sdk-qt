// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSITESRESPONSE_H
#define QTAWS_LISTNETWORKSITESRESPONSE_H

#include "privatenetworksresponse.h"
#include "listnetworksitesrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkSitesResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListNetworkSitesResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ListNetworkSitesResponse(const ListNetworkSitesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNetworkSitesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkSitesResponse)
    Q_DISABLE_COPY(ListNetworkSitesResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
