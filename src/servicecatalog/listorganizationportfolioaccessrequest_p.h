// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONPORTFOLIOACCESSREQUEST_P_H
#define QTAWS_LISTORGANIZATIONPORTFOLIOACCESSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listorganizationportfolioaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListOrganizationPortfolioAccessRequest;

class ListOrganizationPortfolioAccessRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListOrganizationPortfolioAccessRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListOrganizationPortfolioAccessRequest * const q);
    ListOrganizationPortfolioAccessRequestPrivate(const ListOrganizationPortfolioAccessRequestPrivate &other,
                                   ListOrganizationPortfolioAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrganizationPortfolioAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
