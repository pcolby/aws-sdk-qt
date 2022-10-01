// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIORESPONSE_P_H
#define QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociatePrincipalWithPortfolioResponse;

class AssociatePrincipalWithPortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit AssociatePrincipalWithPortfolioResponsePrivate(AssociatePrincipalWithPortfolioResponse * const q);

    void parseAssociatePrincipalWithPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePrincipalWithPortfolioResponse)
    Q_DISABLE_COPY(AssociatePrincipalWithPortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
