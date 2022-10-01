// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGCLIENT_P_H
#define QTAWS_APPCONFIGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AppConfig {

class AppConfigClient;

class AppConfigClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AppConfigClientPrivate(AppConfigClient * const q);

private:
    Q_DECLARE_PUBLIC(AppConfigClient)
    Q_DISABLE_COPY(AppConfigClientPrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
