// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOSFORPRODUCTREQUEST_P_H
#define QTAWS_LISTPORTFOLIOSFORPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listportfoliosforproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfoliosForProductRequest;

class ListPortfoliosForProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListPortfoliosForProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListPortfoliosForProductRequest * const q);
    ListPortfoliosForProductRequestPrivate(const ListPortfoliosForProductRequestPrivate &other,
                                   ListPortfoliosForProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPortfoliosForProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
