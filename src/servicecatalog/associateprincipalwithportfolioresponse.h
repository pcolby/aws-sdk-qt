// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIORESPONSE_H
#define QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "associateprincipalwithportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociatePrincipalWithPortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT AssociatePrincipalWithPortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    AssociatePrincipalWithPortfolioResponse(const AssociatePrincipalWithPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePrincipalWithPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePrincipalWithPortfolioResponse)
    Q_DISABLE_COPY(AssociatePrincipalWithPortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
