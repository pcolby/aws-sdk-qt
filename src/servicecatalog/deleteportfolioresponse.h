// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIORESPONSE_H
#define QTAWS_DELETEPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeletePortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeletePortfolioResponse(const DeletePortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePortfolioResponse)
    Q_DISABLE_COPY(DeletePortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
