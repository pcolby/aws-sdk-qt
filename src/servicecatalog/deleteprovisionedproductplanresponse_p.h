// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDPRODUCTPLANRESPONSE_P_H
#define QTAWS_DELETEPROVISIONEDPRODUCTPLANRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisionedProductPlanResponse;

class DeleteProvisionedProductPlanResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeleteProvisionedProductPlanResponsePrivate(DeleteProvisionedProductPlanResponse * const q);

    void parseDeleteProvisionedProductPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProvisionedProductPlanResponse)
    Q_DISABLE_COPY(DeleteProvisionedProductPlanResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
