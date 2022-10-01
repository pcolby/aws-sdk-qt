// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONREQUEST_P_H
#define QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listprovisioningartifactsforserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsForServiceActionRequest;

class ListProvisioningArtifactsForServiceActionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListProvisioningArtifactsForServiceActionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListProvisioningArtifactsForServiceActionRequest * const q);
    ListProvisioningArtifactsForServiceActionRequestPrivate(const ListProvisioningArtifactsForServiceActionRequestPrivate &other,
                                   ListProvisioningArtifactsForServiceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisioningArtifactsForServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
