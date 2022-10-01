// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESRESPONSE_P_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioSharesResponse;

class DescribePortfolioSharesResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribePortfolioSharesResponsePrivate(DescribePortfolioSharesResponse * const q);

    void parseDescribePortfolioSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePortfolioSharesResponse)
    Q_DISABLE_COPY(DescribePortfolioSharesResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
