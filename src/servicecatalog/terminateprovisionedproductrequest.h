// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEPROVISIONEDPRODUCTREQUEST_H
#define QTAWS_TERMINATEPROVISIONEDPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class TerminateProvisionedProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT TerminateProvisionedProductRequest : public ServiceCatalogRequest {

public:
    TerminateProvisionedProductRequest(const TerminateProvisionedProductRequest &other);
    TerminateProvisionedProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
