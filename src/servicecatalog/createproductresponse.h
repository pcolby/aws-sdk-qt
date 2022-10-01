// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRODUCTRESPONSE_H
#define QTAWS_CREATEPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "createproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreateProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateProductResponse(const CreateProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProductResponse)
    Q_DISABLE_COPY(CreateProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
