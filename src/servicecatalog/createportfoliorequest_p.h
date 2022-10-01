// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIOREQUEST_P_H
#define QTAWS_CREATEPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioRequest;

class CreatePortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreatePortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreatePortfolioRequest * const q);
    CreatePortfolioRequestPrivate(const CreatePortfolioRequestPrivate &other,
                                   CreatePortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
