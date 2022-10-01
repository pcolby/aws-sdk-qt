// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIOSHAREREQUEST_P_H
#define QTAWS_UPDATEPORTFOLIOSHAREREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioShareRequest;

class UpdatePortfolioShareRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdatePortfolioShareRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdatePortfolioShareRequest * const q);
    UpdatePortfolioShareRequestPrivate(const UpdatePortfolioShareRequestPrivate &other,
                                   UpdatePortfolioShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
