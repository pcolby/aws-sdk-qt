// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCEREQUEST_H
#define QTAWS_GETNETWORKRESOURCEREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkResourceRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetNetworkResourceRequest : public PrivateNetworksRequest {

public:
    GetNetworkResourceRequest(const GetNetworkResourceRequest &other);
    GetNetworkResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourceRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
