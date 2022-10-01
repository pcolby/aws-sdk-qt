// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_CREATEPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisioningArtifactRequest;

class CreateProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreateProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreateProvisioningArtifactRequest * const q);
    CreateProvisioningArtifactRequestPrivate(const CreateProvisioningArtifactRequestPrivate &other,
                                   CreateProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
