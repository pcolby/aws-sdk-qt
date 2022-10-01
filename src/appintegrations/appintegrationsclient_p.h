// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPINTEGRATIONSCLIENT_P_H
#define QTAWS_APPINTEGRATIONSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AppIntegrations {

class AppIntegrationsClient;

class AppIntegrationsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AppIntegrationsClientPrivate(AppIntegrationsClient * const q);

private:
    Q_DECLARE_PUBLIC(AppIntegrationsClient)
    Q_DISABLE_COPY(AppIntegrationsClientPrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
