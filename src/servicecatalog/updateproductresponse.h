// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRODUCTRESPONSE_H
#define QTAWS_UPDATEPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "updateproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateProductResponse(const UpdateProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProductResponse)
    Q_DISABLE_COPY(UpdateProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
