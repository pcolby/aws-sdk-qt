// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIORESPONSE_H
#define QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "disassociateproductfromportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateProductFromPortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociateProductFromPortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DisassociateProductFromPortfolioResponse(const DisassociateProductFromPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateProductFromPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateProductFromPortfolioResponse)
    Q_DISABLE_COPY(DisassociateProductFromPortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
