// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONSTRAINTSFORPORTFOLIOREQUEST_P_H
#define QTAWS_LISTCONSTRAINTSFORPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listconstraintsforportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListConstraintsForPortfolioRequest;

class ListConstraintsForPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListConstraintsForPortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListConstraintsForPortfolioRequest * const q);
    ListConstraintsForPortfolioRequestPrivate(const ListConstraintsForPortfolioRequestPrivate &other,
                                   ListConstraintsForPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConstraintsForPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
