// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEDISCOVERYREQUEST_P_H
#define QTAWS_SERVICEDISCOVERYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryRequest;

class ServiceDiscoveryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServiceDiscoveryRequest::Action action; ///< ServiceDiscovery action to be performed.
    QString apiVersion;        ///< ServiceDiscovery API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceDiscovery request (query string) parameters. @todo?

    ServiceDiscoveryRequestPrivate(const ServiceDiscoveryRequest::Action action, ServiceDiscoveryRequest * const q);
    ServiceDiscoveryRequestPrivate(const ServiceDiscoveryRequestPrivate &other, ServiceDiscoveryRequest * const q);

    static QString toString(const ServiceDiscoveryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceDiscoveryRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
