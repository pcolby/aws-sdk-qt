// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_UPDATEPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisioningArtifactRequest;

class UpdateProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateProvisioningArtifactRequest * const q);
    UpdateProvisioningArtifactRequestPrivate(const UpdateProvisioningArtifactRequestPrivate &other,
                                   UpdateProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
