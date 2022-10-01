// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSITESREQUEST_H
#define QTAWS_LISTNETWORKSITESREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkSitesRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListNetworkSitesRequest : public PrivateNetworksRequest {

public:
    ListNetworkSitesRequest(const ListNetworkSitesRequest &other);
    ListNetworkSitesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkSitesRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
