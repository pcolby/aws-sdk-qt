// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIOREQUEST_P_H
#define QTAWS_UPDATEPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioRequest;

class UpdatePortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdatePortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdatePortfolioRequest * const q);
    UpdatePortfolioRequestPrivate(const UpdatePortfolioRequestPrivate &other,
                                   UpdatePortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
