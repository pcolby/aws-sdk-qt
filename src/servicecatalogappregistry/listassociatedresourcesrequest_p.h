// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDRESOURCESREQUEST_P_H
#define QTAWS_LISTASSOCIATEDRESOURCESREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "listassociatedresourcesrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedResourcesRequest;

class ListAssociatedResourcesRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    ListAssociatedResourcesRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   ListAssociatedResourcesRequest * const q);
    ListAssociatedResourcesRequestPrivate(const ListAssociatedResourcesRequestPrivate &other,
                                   ListAssociatedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedResourcesRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
