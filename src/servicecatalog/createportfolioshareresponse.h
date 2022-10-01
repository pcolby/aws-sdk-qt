// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIOSHARERESPONSE_H
#define QTAWS_CREATEPORTFOLIOSHARERESPONSE_H

#include "servicecatalogresponse.h"
#include "createportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioShareResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreatePortfolioShareResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreatePortfolioShareResponse(const CreatePortfolioShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePortfolioShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortfolioShareResponse)
    Q_DISABLE_COPY(CreatePortfolioShareResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
