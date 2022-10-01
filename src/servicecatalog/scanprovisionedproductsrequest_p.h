// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANPROVISIONEDPRODUCTSREQUEST_P_H
#define QTAWS_SCANPROVISIONEDPRODUCTSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "scanprovisionedproductsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ScanProvisionedProductsRequest;

class ScanProvisionedProductsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ScanProvisionedProductsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ScanProvisionedProductsRequest * const q);
    ScanProvisionedProductsRequestPrivate(const ScanProvisionedProductsRequestPrivate &other,
                                   ScanProvisionedProductsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ScanProvisionedProductsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
