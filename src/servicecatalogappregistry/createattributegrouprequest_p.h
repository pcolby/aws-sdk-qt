// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTRIBUTEGROUPREQUEST_P_H
#define QTAWS_CREATEATTRIBUTEGROUPREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "createattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class CreateAttributeGroupRequest;

class CreateAttributeGroupRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    CreateAttributeGroupRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   CreateAttributeGroupRequest * const q);
    CreateAttributeGroupRequestPrivate(const CreateAttributeGroupRequestPrivate &other,
                                   CreateAttributeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
