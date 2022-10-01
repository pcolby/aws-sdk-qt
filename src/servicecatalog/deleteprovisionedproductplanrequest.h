// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDPRODUCTPLANREQUEST_H
#define QTAWS_DELETEPROVISIONEDPRODUCTPLANREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisionedProductPlanRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteProvisionedProductPlanRequest : public ServiceCatalogRequest {

public:
    DeleteProvisionedProductPlanRequest(const DeleteProvisionedProductPlanRequest &other);
    DeleteProvisionedProductPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
