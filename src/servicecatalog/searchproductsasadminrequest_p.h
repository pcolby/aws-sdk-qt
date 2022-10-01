// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSASADMINREQUEST_P_H
#define QTAWS_SEARCHPRODUCTSASADMINREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "searchproductsasadminrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsAsAdminRequest;

class SearchProductsAsAdminRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    SearchProductsAsAdminRequestPrivate(const ServiceCatalogRequest::Action action,
                                   SearchProductsAsAdminRequest * const q);
    SearchProductsAsAdminRequestPrivate(const SearchProductsAsAdminRequestPrivate &other,
                                   SearchProductsAsAdminRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchProductsAsAdminRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
