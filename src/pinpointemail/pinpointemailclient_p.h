// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTEMAILCLIENT_P_H
#define QTAWS_PINPOINTEMAILCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace PinpointEmail {

class PinpointEmailClient;

class PinpointEmailClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PinpointEmailClientPrivate(PinpointEmailClient * const q);

private:
    Q_DECLARE_PUBLIC(PinpointEmailClient)
    Q_DISABLE_COPY(PinpointEmailClientPrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
