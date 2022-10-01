// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTPLANRESPONSE_P_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTPLANRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductPlanResponse;

class ExecuteProvisionedProductPlanResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ExecuteProvisionedProductPlanResponsePrivate(ExecuteProvisionedProductPlanResponse * const q);

    void parseExecuteProvisionedProductPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteProvisionedProductPlanResponse)
    Q_DISABLE_COPY(ExecuteProvisionedProductPlanResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
