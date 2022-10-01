// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEPROVISIONINGPARAMETERSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeprovisioningparametersrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningParametersRequest;

class DescribeProvisioningParametersRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProvisioningParametersRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProvisioningParametersRequest * const q);
    DescribeProvisioningParametersRequestPrivate(const DescribeProvisioningParametersRequestPrivate &other,
                                   DescribeProvisioningParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningParametersRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
