// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSASADMINRESPONSE_H
#define QTAWS_SEARCHPRODUCTSASADMINRESPONSE_H

#include "servicecatalogresponse.h"
#include "searchproductsasadminrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsAsAdminResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT SearchProductsAsAdminResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    SearchProductsAsAdminResponse(const SearchProductsAsAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchProductsAsAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProductsAsAdminResponse)
    Q_DISABLE_COPY(SearchProductsAsAdminResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
