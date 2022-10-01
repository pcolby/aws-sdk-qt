// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPORTFOLIOSHARERESPONSE_H
#define QTAWS_ACCEPTPORTFOLIOSHARERESPONSE_H

#include "servicecatalogresponse.h"
#include "acceptportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AcceptPortfolioShareResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT AcceptPortfolioShareResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    AcceptPortfolioShareResponse(const AcceptPortfolioShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptPortfolioShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptPortfolioShareResponse)
    Q_DISABLE_COPY(AcceptPortfolioShareResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
