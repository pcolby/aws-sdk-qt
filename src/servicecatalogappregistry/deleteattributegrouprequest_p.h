// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTEGROUPREQUEST_P_H
#define QTAWS_DELETEATTRIBUTEGROUPREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "deleteattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DeleteAttributeGroupRequest;

class DeleteAttributeGroupRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    DeleteAttributeGroupRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   DeleteAttributeGroupRequest * const q);
    DeleteAttributeGroupRequestPrivate(const DeleteAttributeGroupRequestPrivate &other,
                                   DeleteAttributeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
