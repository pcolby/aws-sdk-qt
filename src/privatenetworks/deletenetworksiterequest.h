// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSITEREQUEST_H
#define QTAWS_DELETENETWORKSITEREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkSiteRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT DeleteNetworkSiteRequest : public PrivateNetworksRequest {

public:
    DeleteNetworkSiteRequest(const DeleteNetworkSiteRequest &other);
    DeleteNetworkSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
