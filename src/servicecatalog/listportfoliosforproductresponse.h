// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOSFORPRODUCTRESPONSE_H
#define QTAWS_LISTPORTFOLIOSFORPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "listportfoliosforproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfoliosForProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListPortfoliosForProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListPortfoliosForProductResponse(const ListPortfoliosForProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPortfoliosForProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortfoliosForProductResponse)
    Q_DISABLE_COPY(ListPortfoliosForProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
