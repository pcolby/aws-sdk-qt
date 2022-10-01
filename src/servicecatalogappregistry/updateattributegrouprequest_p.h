// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTRIBUTEGROUPREQUEST_P_H
#define QTAWS_UPDATEATTRIBUTEGROUPREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "updateattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class UpdateAttributeGroupRequest;

class UpdateAttributeGroupRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    UpdateAttributeGroupRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   UpdateAttributeGroupRequest * const q);
    UpdateAttributeGroupRequestPrivate(const UpdateAttributeGroupRequestPrivate &other,
                                   UpdateAttributeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
