// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCRESOURCEREQUEST_P_H
#define QTAWS_SYNCRESOURCEREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "syncresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class SyncResourceRequest;

class SyncResourceRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    SyncResourceRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   SyncResourceRequest * const q);
    SyncResourceRequestPrivate(const SyncResourceRequestPrivate &other,
                                   SyncResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(SyncResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
