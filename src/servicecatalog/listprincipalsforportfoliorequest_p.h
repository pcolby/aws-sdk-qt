// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSFORPORTFOLIOREQUEST_P_H
#define QTAWS_LISTPRINCIPALSFORPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listprincipalsforportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPrincipalsForPortfolioRequest;

class ListPrincipalsForPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListPrincipalsForPortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListPrincipalsForPortfolioRequest * const q);
    ListPrincipalsForPortfolioRequestPrivate(const ListPrincipalsForPortfolioRequestPrivate &other,
                                   ListPrincipalsForPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPrincipalsForPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
