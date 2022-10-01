// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPORTFOLIOSHAREREQUEST_P_H
#define QTAWS_ACCEPTPORTFOLIOSHAREREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "acceptportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AcceptPortfolioShareRequest;

class AcceptPortfolioShareRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    AcceptPortfolioShareRequestPrivate(const ServiceCatalogRequest::Action action,
                                   AcceptPortfolioShareRequest * const q);
    AcceptPortfolioShareRequestPrivate(const AcceptPortfolioShareRequestPrivate &other,
                                   AcceptPortfolioShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptPortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
