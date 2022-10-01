// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONEDPRODUCTPLANREQUEST_H
#define QTAWS_CREATEPROVISIONEDPRODUCTPLANREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisionedProductPlanRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CreateProvisionedProductPlanRequest : public ServiceCatalogRequest {

public:
    CreateProvisionedProductPlanRequest(const CreateProvisionedProductPlanRequest &other);
    CreateProvisionedProductPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
