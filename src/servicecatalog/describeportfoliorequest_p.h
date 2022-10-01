// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOREQUEST_P_H
#define QTAWS_DESCRIBEPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioRequest;

class DescribePortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribePortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribePortfolioRequest * const q);
    DescribePortfolioRequestPrivate(const DescribePortfolioRequestPrivate &other,
                                   DescribePortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
