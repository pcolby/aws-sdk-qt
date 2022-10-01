// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROVISIONEDPRODUCTSREQUEST_P_H
#define QTAWS_SEARCHPROVISIONEDPRODUCTSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "searchprovisionedproductsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProvisionedProductsRequest;

class SearchProvisionedProductsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    SearchProvisionedProductsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   SearchProvisionedProductsRequest * const q);
    SearchProvisionedProductsRequestPrivate(const SearchProvisionedProductsRequestPrivate &other,
                                   SearchProvisionedProductsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchProvisionedProductsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
