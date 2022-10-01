// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESTATUSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioShareStatusResponse;

class DescribePortfolioShareStatusResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribePortfolioShareStatusResponsePrivate(DescribePortfolioShareStatusResponse * const q);

    void parseDescribePortfolioShareStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePortfolioShareStatusResponse)
    Q_DISABLE_COPY(DescribePortfolioShareStatusResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
