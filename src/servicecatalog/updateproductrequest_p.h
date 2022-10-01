// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRODUCTREQUEST_P_H
#define QTAWS_UPDATEPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProductRequest;

class UpdateProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateProductRequest * const q);
    UpdateProductRequestPrivate(const UpdateProductRequestPrivate &other,
                                   UpdateProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
