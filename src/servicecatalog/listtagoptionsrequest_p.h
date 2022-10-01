// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGOPTIONSREQUEST_P_H
#define QTAWS_LISTTAGOPTIONSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listtagoptionsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListTagOptionsRequest;

class ListTagOptionsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListTagOptionsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListTagOptionsRequest * const q);
    ListTagOptionsRequestPrivate(const ListTagOptionsRequestPrivate &other,
                                   ListTagOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagOptionsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
