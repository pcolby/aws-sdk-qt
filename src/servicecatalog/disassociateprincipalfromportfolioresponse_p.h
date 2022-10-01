// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIORESPONSE_P_H
#define QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociatePrincipalFromPortfolioResponse;

class DisassociatePrincipalFromPortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DisassociatePrincipalFromPortfolioResponsePrivate(DisassociatePrincipalFromPortfolioResponse * const q);

    void parseDisassociatePrincipalFromPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociatePrincipalFromPortfolioResponse)
    Q_DISABLE_COPY(DisassociatePrincipalFromPortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
