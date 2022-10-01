// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_DELETEPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisioningArtifactRequest;

class DeleteProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeleteProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeleteProvisioningArtifactRequest * const q);
    DeleteProvisioningArtifactRequestPrivate(const DeleteProvisioningArtifactRequestPrivate &other,
                                   DeleteProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
