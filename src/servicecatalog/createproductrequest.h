// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRODUCTREQUEST_H
#define QTAWS_CREATEPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CreateProductRequest : public ServiceCatalogRequest {

public:
    CreateProductRequest(const CreateProductRequest &other);
    CreateProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
