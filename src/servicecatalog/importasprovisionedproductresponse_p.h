// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTASPROVISIONEDPRODUCTRESPONSE_P_H
#define QTAWS_IMPORTASPROVISIONEDPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ImportAsProvisionedProductResponse;

class ImportAsProvisionedProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ImportAsProvisionedProductResponsePrivate(ImportAsProvisionedProductResponse * const q);

    void parseImportAsProvisionedProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportAsProvisionedProductResponse)
    Q_DISABLE_COPY(ImportAsProvisionedProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
