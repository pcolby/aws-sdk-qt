// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LIGHTSAILCLIENT_P_H
#define QTAWS_LIGHTSAILCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Lightsail {

class LightsailClient;

class LightsailClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LightsailClientPrivate(LightsailClient * const q);

private:
    Q_DECLARE_PUBLIC(LightsailClient)
    Q_DISABLE_COPY(LightsailClientPrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
