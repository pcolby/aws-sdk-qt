// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONEDPRODUCTPLANRESPONSE_H
#define QTAWS_CREATEPROVISIONEDPRODUCTPLANRESPONSE_H

#include "servicecatalogresponse.h"
#include "createprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisionedProductPlanResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreateProvisionedProductPlanResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateProvisionedProductPlanResponse(const CreateProvisionedProductPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProvisionedProductPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisionedProductPlanResponse)
    Q_DISABLE_COPY(CreateProvisionedProductPlanResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
