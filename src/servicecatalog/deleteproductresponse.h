// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRODUCTRESPONSE_H
#define QTAWS_DELETEPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeleteProductResponse(const DeleteProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProductResponse)
    Q_DISABLE_COPY(DeleteProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
