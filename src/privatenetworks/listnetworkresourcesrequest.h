// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKRESOURCESREQUEST_H
#define QTAWS_LISTNETWORKRESOURCESREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkResourcesRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListNetworkResourcesRequest : public PrivateNetworksRequest {

public:
    ListNetworkResourcesRequest(const ListNetworkResourcesRequest &other);
    ListNetworkResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkResourcesRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
