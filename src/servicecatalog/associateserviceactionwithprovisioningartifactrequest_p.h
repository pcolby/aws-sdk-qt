// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_ASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "associateserviceactionwithprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateServiceActionWithProvisioningArtifactRequest;

class AssociateServiceActionWithProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    AssociateServiceActionWithProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   AssociateServiceActionWithProvisioningArtifactRequest * const q);
    AssociateServiceActionWithProvisioningArtifactRequestPrivate(const AssociateServiceActionWithProvisioningArtifactRequestPrivate &other,
                                   AssociateServiceActionWithProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateServiceActionWithProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
