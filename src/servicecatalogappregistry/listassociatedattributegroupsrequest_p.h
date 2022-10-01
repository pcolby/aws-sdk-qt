// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSREQUEST_P_H
#define QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "listassociatedattributegroupsrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedAttributeGroupsRequest;

class ListAssociatedAttributeGroupsRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    ListAssociatedAttributeGroupsRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   ListAssociatedAttributeGroupsRequest * const q);
    ListAssociatedAttributeGroupsRequestPrivate(const ListAssociatedAttributeGroupsRequestPrivate &other,
                                   ListAssociatedAttributeGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedAttributeGroupsRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
