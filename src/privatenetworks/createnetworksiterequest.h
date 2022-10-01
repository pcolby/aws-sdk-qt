// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSITEREQUEST_H
#define QTAWS_CREATENETWORKSITEREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class CreateNetworkSiteRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT CreateNetworkSiteRequest : public PrivateNetworksRequest {

public:
    CreateNetworkSiteRequest(const CreateNetworkSiteRequest &other);
    CreateNetworkSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
