// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIORESPONSE_P_H
#define QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateProductFromPortfolioResponse;

class DisassociateProductFromPortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DisassociateProductFromPortfolioResponsePrivate(DisassociateProductFromPortfolioResponse * const q);

    void parseDisassociateProductFromPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateProductFromPortfolioResponse)
    Q_DISABLE_COPY(DisassociateProductFromPortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
