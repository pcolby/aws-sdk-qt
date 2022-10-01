// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetApplicationRequest;

class GetApplicationRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    GetApplicationRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   GetApplicationRequest * const q);
    GetApplicationRequestPrivate(const GetApplicationRequestPrivate &other,
                                   GetApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
