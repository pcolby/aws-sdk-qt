// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONREQUEST_P_H
#define QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "listattributegroupsforapplicationrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsForApplicationRequest;

class ListAttributeGroupsForApplicationRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    ListAttributeGroupsForApplicationRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   ListAttributeGroupsForApplicationRequest * const q);
    ListAttributeGroupsForApplicationRequestPrivate(const ListAttributeGroupsForApplicationRequestPrivate &other,
                                   ListAttributeGroupsForApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttributeGroupsForApplicationRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
