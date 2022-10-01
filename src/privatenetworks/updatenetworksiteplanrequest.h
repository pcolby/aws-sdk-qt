// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITEPLANREQUEST_H
#define QTAWS_UPDATENETWORKSITEPLANREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSitePlanRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT UpdateNetworkSitePlanRequest : public PrivateNetworksRequest {

public:
    UpdateNetworkSitePlanRequest(const UpdateNetworkSitePlanRequest &other);
    UpdateNetworkSitePlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkSitePlanRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
