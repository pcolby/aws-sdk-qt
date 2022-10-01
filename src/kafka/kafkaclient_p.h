// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKACLIENT_P_H
#define QTAWS_KAFKACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Kafka {

class KafkaClient;

class KafkaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KafkaClientPrivate(KafkaClient * const q);

private:
    Q_DECLARE_PUBLIC(KafkaClient)
    Q_DISABLE_COPY(KafkaClientPrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
