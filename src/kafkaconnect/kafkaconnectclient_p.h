// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKACONNECTCLIENT_P_H
#define QTAWS_KAFKACONNECTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace KafkaConnect {

class KafkaConnectClient;

class KafkaConnectClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KafkaConnectClientPrivate(KafkaConnectClient * const q);

private:
    Q_DECLARE_PUBLIC(KafkaConnectClient)
    Q_DISABLE_COPY(KafkaConnectClientPrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
