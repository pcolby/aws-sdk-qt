// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTREQUEST_H
#define QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListStackInstancesForProvisionedProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListStackInstancesForProvisionedProductRequest : public ServiceCatalogRequest {

public:
    ListStackInstancesForProvisionedProductRequest(const ListStackInstancesForProvisionedProductRequest &other);
    ListStackInstancesForProvisionedProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackInstancesForProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
