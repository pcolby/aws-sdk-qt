// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRODUCTREQUEST_P_H
#define QTAWS_DELETEPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProductRequest;

class DeleteProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeleteProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeleteProductRequest * const q);
    DeleteProductRequestPrivate(const DeleteProductRequestPrivate &other,
                                   DeleteProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
