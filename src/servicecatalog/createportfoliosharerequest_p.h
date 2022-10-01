// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIOSHAREREQUEST_P_H
#define QTAWS_CREATEPORTFOLIOSHAREREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioShareRequest;

class CreatePortfolioShareRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreatePortfolioShareRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreatePortfolioShareRequest * const q);
    CreatePortfolioShareRequestPrivate(const CreatePortfolioShareRequestPrivate &other,
                                   CreatePortfolioShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
