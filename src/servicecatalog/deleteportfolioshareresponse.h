// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIOSHARERESPONSE_H
#define QTAWS_DELETEPORTFOLIOSHARERESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioShareResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeletePortfolioShareResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeletePortfolioShareResponse(const DeletePortfolioShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePortfolioShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePortfolioShareResponse)
    Q_DISABLE_COPY(DeletePortfolioShareResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
