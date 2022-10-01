// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCEPTEDPORTFOLIOSHARESRESPONSE_H
#define QTAWS_LISTACCEPTEDPORTFOLIOSHARESRESPONSE_H

#include "servicecatalogresponse.h"
#include "listacceptedportfoliosharesrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListAcceptedPortfolioSharesResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListAcceptedPortfolioSharesResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListAcceptedPortfolioSharesResponse(const ListAcceptedPortfolioSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAcceptedPortfolioSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAcceptedPortfolioSharesResponse)
    Q_DISABLE_COPY(ListAcceptedPortfolioSharesResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
