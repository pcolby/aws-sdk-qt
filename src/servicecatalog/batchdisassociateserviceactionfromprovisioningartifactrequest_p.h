// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "batchdisassociateserviceactionfromprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class BatchDisassociateServiceActionFromProvisioningArtifactRequest;

class BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   BatchDisassociateServiceActionFromProvisioningArtifactRequest * const q);
    BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate(const BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate &other,
                                   BatchDisassociateServiceActionFromProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateServiceActionFromProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
