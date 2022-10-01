// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONEDPRODUCTPLANRESPONSE_P_H
#define QTAWS_CREATEPROVISIONEDPRODUCTPLANRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisionedProductPlanResponse;

class CreateProvisionedProductPlanResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreateProvisionedProductPlanResponsePrivate(CreateProvisionedProductPlanResponse * const q);

    void parseCreateProvisionedProductPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProvisionedProductPlanResponse)
    Q_DISABLE_COPY(CreateProvisionedProductPlanResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
