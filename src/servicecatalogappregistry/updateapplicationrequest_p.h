// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "updateapplicationrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class UpdateApplicationRequest;

class UpdateApplicationRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    UpdateApplicationRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   UpdateApplicationRequest * const q);
    UpdateApplicationRequestPrivate(const UpdateApplicationRequestPrivate &other,
                                   UpdateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
