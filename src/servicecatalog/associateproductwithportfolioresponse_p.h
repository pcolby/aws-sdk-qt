// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIORESPONSE_P_H
#define QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateProductWithPortfolioResponse;

class AssociateProductWithPortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit AssociateProductWithPortfolioResponsePrivate(AssociateProductWithPortfolioResponse * const q);

    void parseAssociateProductWithPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateProductWithPortfolioResponse)
    Q_DISABLE_COPY(AssociateProductWithPortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
