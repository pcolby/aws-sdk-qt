// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTASPROVISIONEDPRODUCTRESPONSE_H
#define QTAWS_IMPORTASPROVISIONEDPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "importasprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ImportAsProvisionedProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ImportAsProvisionedProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ImportAsProvisionedProductResponse(const ImportAsProvisionedProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportAsProvisionedProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportAsProvisionedProductResponse)
    Q_DISABLE_COPY(ImportAsProvisionedProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
