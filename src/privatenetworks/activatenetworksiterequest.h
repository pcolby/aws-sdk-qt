// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATENETWORKSITEREQUEST_H
#define QTAWS_ACTIVATENETWORKSITEREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateNetworkSiteRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT ActivateNetworkSiteRequest : public PrivateNetworksRequest {

public:
    ActivateNetworkSiteRequest(const ActivateNetworkSiteRequest &other);
    ActivateNetworkSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
