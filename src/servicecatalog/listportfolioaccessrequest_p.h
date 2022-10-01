// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOACCESSREQUEST_P_H
#define QTAWS_LISTPORTFOLIOACCESSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listportfolioaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfolioAccessRequest;

class ListPortfolioAccessRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListPortfolioAccessRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListPortfolioAccessRequest * const q);
    ListPortfolioAccessRequestPrivate(const ListPortfolioAccessRequestPrivate &other,
                                   ListPortfolioAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPortfolioAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
