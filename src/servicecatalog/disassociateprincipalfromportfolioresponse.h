// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIORESPONSE_H
#define QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "disassociateprincipalfromportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociatePrincipalFromPortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociatePrincipalFromPortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DisassociatePrincipalFromPortfolioResponse(const DisassociatePrincipalFromPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePrincipalFromPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePrincipalFromPortfolioResponse)
    Q_DISABLE_COPY(DisassociatePrincipalFromPortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
