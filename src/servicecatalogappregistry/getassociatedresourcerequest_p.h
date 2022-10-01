// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDRESOURCEREQUEST_P_H
#define QTAWS_GETASSOCIATEDRESOURCEREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "getassociatedresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAssociatedResourceRequest;

class GetAssociatedResourceRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    GetAssociatedResourceRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   GetAssociatedResourceRequest * const q);
    GetAssociatedResourceRequestPrivate(const GetAssociatedResourceRequestPrivate &other,
                                   GetAssociatedResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssociatedResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
