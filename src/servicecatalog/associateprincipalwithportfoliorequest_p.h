// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIOREQUEST_P_H
#define QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "associateprincipalwithportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociatePrincipalWithPortfolioRequest;

class AssociatePrincipalWithPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    AssociatePrincipalWithPortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   AssociatePrincipalWithPortfolioRequest * const q);
    AssociatePrincipalWithPortfolioRequestPrivate(const AssociatePrincipalWithPortfolioRequestPrivate &other,
                                   AssociatePrincipalWithPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePrincipalWithPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
