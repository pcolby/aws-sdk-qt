// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSITEREQUEST_H
#define QTAWS_GETNETWORKSITEREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkSiteRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetNetworkSiteRequest : public PrivateNetworksRequest {

public:
    GetNetworkSiteRequest(const GetNetworkSiteRequest &other);
    GetNetworkSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
