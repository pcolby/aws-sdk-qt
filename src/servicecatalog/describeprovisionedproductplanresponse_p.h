// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONEDPRODUCTPLANRESPONSE_P_H
#define QTAWS_DESCRIBEPROVISIONEDPRODUCTPLANRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisionedProductPlanResponse;

class DescribeProvisionedProductPlanResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProvisionedProductPlanResponsePrivate(DescribeProvisionedProductPlanResponse * const q);

    void parseDescribeProvisionedProductPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProvisionedProductPlanResponse)
    Q_DISABLE_COPY(DescribeProvisionedProductPlanResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
