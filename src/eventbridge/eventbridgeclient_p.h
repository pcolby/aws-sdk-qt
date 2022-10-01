// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVENTBRIDGECLIENT_P_H
#define QTAWS_EVENTBRIDGECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace EventBridge {

class EventBridgeClient;

class EventBridgeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EventBridgeClientPrivate(EventBridgeClient * const q);

private:
    Q_DECLARE_PUBLIC(EventBridgeClient)
    Q_DISABLE_COPY(EventBridgeClientPrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
