// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_BATCHASSOCIATESERVICEACTIONWITHPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "batchassociateserviceactionwithprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchAssociateServiceActionWithProvisioningArtifactRequest;

class BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   BatchAssociateServiceActionWithProvisioningArtifactRequest * const q);
    BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate(const BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate &other,
                                   BatchAssociateServiceActionWithProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateServiceActionWithProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
