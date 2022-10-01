// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIORESPONSE_H
#define QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "associateproductwithportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateProductWithPortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT AssociateProductWithPortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    AssociateProductWithPortfolioResponse(const AssociateProductWithPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateProductWithPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateProductWithPortfolioResponse)
    Q_DISABLE_COPY(AssociateProductWithPortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
