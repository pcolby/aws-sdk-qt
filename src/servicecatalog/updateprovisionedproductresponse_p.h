// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTRESPONSE_P_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductResponse;

class UpdateProvisionedProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateProvisionedProductResponsePrivate(UpdateProvisionedProductResponse * const q);

    void parseUpdateProvisionedProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProvisionedProductResponse)
    Q_DISABLE_COPY(UpdateProvisionedProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
