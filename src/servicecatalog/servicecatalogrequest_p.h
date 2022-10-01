// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGREQUEST_P_H
#define QTAWS_SERVICECATALOGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogRequest;

class ServiceCatalogRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServiceCatalogRequest::Action action; ///< ServiceCatalog action to be performed.
    QString apiVersion;        ///< ServiceCatalog API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceCatalog request (query string) parameters. @todo?

    ServiceCatalogRequestPrivate(const ServiceCatalogRequest::Action action, ServiceCatalogRequest * const q);
    ServiceCatalogRequestPrivate(const ServiceCatalogRequestPrivate &other, ServiceCatalogRequest * const q);

    static QString toString(const ServiceCatalogRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceCatalogRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
