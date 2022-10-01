// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTASPROVISIONEDPRODUCTREQUEST_H
#define QTAWS_IMPORTASPROVISIONEDPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ImportAsProvisionedProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ImportAsProvisionedProductRequest : public ServiceCatalogRequest {

public:
    ImportAsProvisionedProductRequest(const ImportAsProvisionedProductRequest &other);
    ImportAsProvisionedProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportAsProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
