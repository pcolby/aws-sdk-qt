// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIOSHAREREQUEST_P_H
#define QTAWS_DELETEPORTFOLIOSHAREREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioShareRequest;

class DeletePortfolioShareRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeletePortfolioShareRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeletePortfolioShareRequest * const q);
    DeletePortfolioShareRequestPrivate(const DeletePortfolioShareRequestPrivate &other,
                                   DeletePortfolioShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
