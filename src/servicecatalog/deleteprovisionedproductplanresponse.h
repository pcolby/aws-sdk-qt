// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDPRODUCTPLANRESPONSE_H
#define QTAWS_DELETEPROVISIONEDPRODUCTPLANRESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisionedProductPlanResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteProvisionedProductPlanResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeleteProvisionedProductPlanResponse(const DeleteProvisionedProductPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProvisionedProductPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisionedProductPlanResponse)
    Q_DISABLE_COPY(DeleteProvisionedProductPlanResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
