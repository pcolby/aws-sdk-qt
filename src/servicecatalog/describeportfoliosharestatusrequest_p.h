// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESTATUSREQUEST_P_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESTATUSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeportfoliosharestatusrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioShareStatusRequest;

class DescribePortfolioShareStatusRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribePortfolioShareStatusRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribePortfolioShareStatusRequest * const q);
    DescribePortfolioShareStatusRequestPrivate(const DescribePortfolioShareStatusRequestPrivate &other,
                                   DescribePortfolioShareStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePortfolioShareStatusRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
