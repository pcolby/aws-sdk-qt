// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIORESPONSE_P_H
#define QTAWS_DESCRIBEPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioResponse;

class DescribePortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribePortfolioResponsePrivate(DescribePortfolioResponse * const q);

    void parseDescribePortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePortfolioResponse)
    Q_DISABLE_COPY(DescribePortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
