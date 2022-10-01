// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESREQUEST_P_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeportfoliosharesrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioSharesRequest;

class DescribePortfolioSharesRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribePortfolioSharesRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribePortfolioSharesRequest * const q);
    DescribePortfolioSharesRequestPrivate(const DescribePortfolioSharesRequestPrivate &other,
                                   DescribePortfolioSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePortfolioSharesRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
