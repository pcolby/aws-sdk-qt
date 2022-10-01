// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSFORPORTFOLIORESPONSE_H
#define QTAWS_LISTPRINCIPALSFORPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "listprincipalsforportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPrincipalsForPortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListPrincipalsForPortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListPrincipalsForPortfolioResponse(const ListPrincipalsForPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPrincipalsForPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrincipalsForPortfolioResponse)
    Q_DISABLE_COPY(ListPrincipalsForPortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
