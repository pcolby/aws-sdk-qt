// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSREQUEST_P_H
#define QTAWS_LISTATTRIBUTEGROUPSREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "listattributegroupsrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsRequest;

class ListAttributeGroupsRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    ListAttributeGroupsRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   ListAttributeGroupsRequest * const q);
    ListAttributeGroupsRequestPrivate(const ListAttributeGroupsRequestPrivate &other,
                                   ListAttributeGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttributeGroupsRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
