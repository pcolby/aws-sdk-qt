// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGARTIFACTREQUEST_P_H
#define QTAWS_DESCRIBEPROVISIONINGARTIFACTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningArtifactRequest;

class DescribeProvisioningArtifactRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProvisioningArtifactRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProvisioningArtifactRequest * const q);
    DescribeProvisioningArtifactRequestPrivate(const DescribeProvisioningArtifactRequestPrivate &other,
                                   DescribeProvisioningArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
