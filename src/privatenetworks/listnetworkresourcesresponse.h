// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKRESOURCESRESPONSE_H
#define QTAWS_LISTNETWORKRESOURCESRESPONSE_H

#include "privatenetworksresponse.h"
#include "listnetworkresourcesrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkResourcesResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListNetworkResourcesResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ListNetworkResourcesResponse(const ListNetworkResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNetworkResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkResourcesResponse)
    Q_DISABLE_COPY(ListNetworkResourcesResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
