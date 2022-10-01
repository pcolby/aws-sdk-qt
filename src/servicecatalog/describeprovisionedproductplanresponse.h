// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONEDPRODUCTPLANRESPONSE_H
#define QTAWS_DESCRIBEPROVISIONEDPRODUCTPLANRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisionedProductPlanResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProvisionedProductPlanResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProvisionedProductPlanResponse(const DescribeProvisionedProductPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProvisionedProductPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisionedProductPlanResponse)
    Q_DISABLE_COPY(DescribeProvisionedProductPlanResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
