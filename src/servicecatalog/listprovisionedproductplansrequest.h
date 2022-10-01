// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDPRODUCTPLANSREQUEST_H
#define QTAWS_LISTPROVISIONEDPRODUCTPLANSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisionedProductPlansRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListProvisionedProductPlansRequest : public ServiceCatalogRequest {

public:
    ListProvisionedProductPlansRequest(const ListProvisionedProductPlansRequest &other);
    ListProvisionedProductPlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisionedProductPlansRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
