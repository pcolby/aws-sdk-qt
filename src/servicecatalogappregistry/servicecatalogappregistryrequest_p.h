// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGAPPREGISTRYREQUEST_P_H
#define QTAWS_SERVICECATALOGAPPREGISTRYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ServiceCatalogAppRegistryRequest;

class ServiceCatalogAppRegistryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServiceCatalogAppRegistryRequest::Action action; ///< ServiceCatalogAppRegistry action to be performed.
    QString apiVersion;        ///< ServiceCatalogAppRegistry API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceCatalogAppRegistry request (query string) parameters. @todo?

    ServiceCatalogAppRegistryRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action, ServiceCatalogAppRegistryRequest * const q);
    ServiceCatalogAppRegistryRequestPrivate(const ServiceCatalogAppRegistryRequestPrivate &other, ServiceCatalogAppRegistryRequest * const q);

    static QString toString(const ServiceCatalogAppRegistryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceCatalogAppRegistryRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
