// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIOREQUEST_P_H
#define QTAWS_DELETEPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioRequest;

class DeletePortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeletePortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeletePortfolioRequest * const q);
    DeletePortfolioRequestPrivate(const DeletePortfolioRequestPrivate &other,
                                   DeletePortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
