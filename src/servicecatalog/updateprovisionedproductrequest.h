// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTREQUEST_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateProvisionedProductRequest : public ServiceCatalogRequest {

public:
    UpdateProvisionedProductRequest(const UpdateProvisionedProductRequest &other);
    UpdateProvisionedProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
