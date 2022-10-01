// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPRODUCTREQUEST_H
#define QTAWS_PROVISIONPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ProvisionProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ProvisionProductRequest : public ServiceCatalogRequest {

public:
    ProvisionProductRequest(const ProvisionProductRequest &other);
    ProvisionProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
