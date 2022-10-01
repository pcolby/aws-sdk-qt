// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociateserviceactionfromprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateServiceActionFromProvisioningArtifactRequest;

class DisassociateServiceActionFromProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisassociateServiceActionFromProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisassociateServiceActionFromProvisioningArtifactRequest * const q);
    DisassociateServiceActionFromProvisioningArtifactRequestPrivate(const DisassociateServiceActionFromProvisioningArtifactRequestPrivate &other,
                                   DisassociateServiceActionFromProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceActionFromProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
