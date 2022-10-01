// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listserviceactionsforprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsForProvisioningArtifactRequest;

class ListServiceActionsForProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListServiceActionsForProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListServiceActionsForProvisioningArtifactRequest * const q);
    ListServiceActionsForProvisioningArtifactRequestPrivate(const ListServiceActionsForProvisioningArtifactRequestPrivate &other,
                                   ListServiceActionsForProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceActionsForProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
