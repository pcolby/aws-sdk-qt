// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMESSAGINGCLIENT_P_H
#define QTAWS_CHIMESDKMESSAGINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ChimeSdkMessaging {

class ChimeSdkMessagingClient;

class ChimeSdkMessagingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ChimeSdkMessagingClientPrivate(ChimeSdkMessagingClient * const q);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMessagingClient)
    Q_DISABLE_COPY(ChimeSdkMessagingClientPrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
