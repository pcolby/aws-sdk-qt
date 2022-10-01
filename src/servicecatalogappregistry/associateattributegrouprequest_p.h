// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEATTRIBUTEGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEATTRIBUTEGROUPREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "associateattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateAttributeGroupRequest;

class AssociateAttributeGroupRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    AssociateAttributeGroupRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   AssociateAttributeGroupRequest * const q);
    AssociateAttributeGroupRequestPrivate(const AssociateAttributeGroupRequestPrivate &other,
                                   AssociateAttributeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
