// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTPLANRESPONSE_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTPLANRESPONSE_H

#include "servicecatalogresponse.h"
#include "executeprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductPlanResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ExecuteProvisionedProductPlanResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ExecuteProvisionedProductPlanResponse(const ExecuteProvisionedProductPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteProvisionedProductPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteProvisionedProductPlanResponse)
    Q_DISABLE_COPY(ExecuteProvisionedProductPlanResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
