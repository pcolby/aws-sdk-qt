// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEGROUPREQUEST_P_H
#define QTAWS_GETATTRIBUTEGROUPREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "getattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAttributeGroupRequest;

class GetAttributeGroupRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    GetAttributeGroupRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   GetAttributeGroupRequest * const q);
    GetAttributeGroupRequestPrivate(const GetAttributeGroupRequestPrivate &other,
                                   GetAttributeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
