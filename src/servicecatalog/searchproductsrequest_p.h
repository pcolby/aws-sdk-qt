// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSREQUEST_P_H
#define QTAWS_SEARCHPRODUCTSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "searchproductsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsRequest;

class SearchProductsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    SearchProductsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   SearchProductsRequest * const q);
    SearchProductsRequestPrivate(const SearchProductsRequestPrivate &other,
                                   SearchProductsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchProductsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
