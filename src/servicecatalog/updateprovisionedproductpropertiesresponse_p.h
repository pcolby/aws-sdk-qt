// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESRESPONSE_P_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductPropertiesResponse;

class UpdateProvisionedProductPropertiesResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateProvisionedProductPropertiesResponsePrivate(UpdateProvisionedProductPropertiesResponse * const q);

    void parseUpdateProvisionedProductPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProvisionedProductPropertiesResponse)
    Q_DISABLE_COPY(UpdateProvisionedProductPropertiesResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
