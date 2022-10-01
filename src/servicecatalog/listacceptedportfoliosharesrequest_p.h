// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCEPTEDPORTFOLIOSHARESREQUEST_P_H
#define QTAWS_LISTACCEPTEDPORTFOLIOSHARESREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listacceptedportfoliosharesrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListAcceptedPortfolioSharesRequest;

class ListAcceptedPortfolioSharesRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListAcceptedPortfolioSharesRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListAcceptedPortfolioSharesRequest * const q);
    ListAcceptedPortfolioSharesRequestPrivate(const ListAcceptedPortfolioSharesRequestPrivate &other,
                                   ListAcceptedPortfolioSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAcceptedPortfolioSharesRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
