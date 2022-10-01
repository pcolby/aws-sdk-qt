// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MQCLIENT_P_H
#define QTAWS_MQCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Mq {

class MqClient;

class MqClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MqClientPrivate(MqClient * const q);

private:
    Q_DECLARE_PUBLIC(MqClient)
    Q_DISABLE_COPY(MqClientPrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
