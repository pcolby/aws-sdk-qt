// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONDISCOVERYCLIENT_P_H
#define QTAWS_APPLICATIONDISCOVERYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApplicationDiscovery {

class ApplicationDiscoveryClient;

class ApplicationDiscoveryClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ApplicationDiscoveryClientPrivate(ApplicationDiscoveryClient * const q);

private:
    Q_DECLARE_PUBLIC(ApplicationDiscoveryClient)
    Q_DISABLE_COPY(ApplicationDiscoveryClientPrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
