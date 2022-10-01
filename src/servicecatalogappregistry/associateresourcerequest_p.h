// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCEREQUEST_P_H
#define QTAWS_ASSOCIATERESOURCEREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "associateresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateResourceRequest;

class AssociateResourceRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    AssociateResourceRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   AssociateResourceRequest * const q);
    AssociateResourceRequestPrivate(const AssociateResourceRequestPrivate &other,
                                   AssociateResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
