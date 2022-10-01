// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIOREQUEST_P_H
#define QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "associateproductwithportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateProductWithPortfolioRequest;

class AssociateProductWithPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    AssociateProductWithPortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   AssociateProductWithPortfolioRequest * const q);
    AssociateProductWithPortfolioRequestPrivate(const AssociateProductWithPortfolioRequestPrivate &other,
                                   AssociateProductWithPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateProductWithPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
