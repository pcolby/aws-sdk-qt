// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONEDPRODUCTPLANREQUEST_P_H
#define QTAWS_DESCRIBEPROVISIONEDPRODUCTPLANREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisionedProductPlanRequest;

class DescribeProvisionedProductPlanRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProvisionedProductPlanRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProvisionedProductPlanRequest * const q);
    DescribeProvisionedProductPlanRequestPrivate(const DescribeProvisionedProductPlanRequestPrivate &other,
                                   DescribeProvisionedProductPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
