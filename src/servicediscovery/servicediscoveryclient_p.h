// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEDISCOVERYCLIENT_P_H
#define QTAWS_SERVICEDISCOVERYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryClient;

class ServiceDiscoveryClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ServiceDiscoveryClientPrivate(ServiceDiscoveryClient * const q);

private:
    Q_DECLARE_PUBLIC(ServiceDiscoveryClient)
    Q_DISABLE_COPY(ServiceDiscoveryClientPrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
