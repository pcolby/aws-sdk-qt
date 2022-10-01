// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRODUCTREQUEST_P_H
#define QTAWS_CREATEPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProductRequest;

class CreateProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreateProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreateProductRequest * const q);
    CreateProductRequestPrivate(const CreateProductRequestPrivate &other,
                                   CreateProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
