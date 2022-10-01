// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIOSHARERESPONSE_H
#define QTAWS_UPDATEPORTFOLIOSHARERESPONSE_H

#include "servicecatalogresponse.h"
#include "updateportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioShareResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdatePortfolioShareResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdatePortfolioShareResponse(const UpdatePortfolioShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePortfolioShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortfolioShareResponse)
    Q_DISABLE_COPY(UpdatePortfolioShareResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
