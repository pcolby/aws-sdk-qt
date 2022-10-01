// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPRODUCTREQUEST_P_H
#define QTAWS_COPYPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "copyproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CopyProductRequest;

class CopyProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CopyProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CopyProductRequest * const q);
    CopyProductRequestPrivate(const CopyProductRequestPrivate &other,
                                   CopyProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
