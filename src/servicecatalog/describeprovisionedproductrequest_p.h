// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONEDPRODUCTREQUEST_P_H
#define QTAWS_DESCRIBEPROVISIONEDPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisionedProductRequest;

class DescribeProvisionedProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProvisionedProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProvisionedProductRequest * const q);
    DescribeProvisionedProductRequestPrivate(const DescribeProvisionedProductRequestPrivate &other,
                                   DescribeProvisionedProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
