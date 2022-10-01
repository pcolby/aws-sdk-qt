// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSREQUEST_P_H
#define QTAWS_LISTPROVISIONINGARTIFACTSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listprovisioningartifactsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsRequest;

class ListProvisioningArtifactsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListProvisioningArtifactsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListProvisioningArtifactsRequest * const q);
    ListProvisioningArtifactsRequestPrivate(const ListProvisioningArtifactsRequestPrivate &other,
                                   ListProvisioningArtifactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisioningArtifactsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
