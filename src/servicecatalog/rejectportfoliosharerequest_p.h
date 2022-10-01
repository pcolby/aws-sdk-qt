// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTPORTFOLIOSHAREREQUEST_P_H
#define QTAWS_REJECTPORTFOLIOSHAREREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "rejectportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class RejectPortfolioShareRequest;

class RejectPortfolioShareRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    RejectPortfolioShareRequestPrivate(const ServiceCatalogRequest::Action action,
                                   RejectPortfolioShareRequest * const q);
    RejectPortfolioShareRequestPrivate(const RejectPortfolioShareRequestPrivate &other,
                                   RejectPortfolioShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectPortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
