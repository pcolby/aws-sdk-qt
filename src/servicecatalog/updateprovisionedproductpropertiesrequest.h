// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESREQUEST_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductPropertiesRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateProvisionedProductPropertiesRequest : public ServiceCatalogRequest {

public:
    UpdateProvisionedProductPropertiesRequest(const UpdateProvisionedProductPropertiesRequest &other);
    UpdateProvisionedProductPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisionedProductPropertiesRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
