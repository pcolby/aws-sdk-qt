// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKACONNECTREQUEST_P_H
#define QTAWS_KAFKACONNECTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class KafkaConnectRequest;

class KafkaConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KafkaConnectRequest::Action action; ///< KafkaConnect action to be performed.
    QString apiVersion;        ///< KafkaConnect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KafkaConnect request (query string) parameters. @todo?

    KafkaConnectRequestPrivate(const KafkaConnectRequest::Action action, KafkaConnectRequest * const q);
    KafkaConnectRequestPrivate(const KafkaConnectRequestPrivate &other, KafkaConnectRequest * const q);

    static QString toString(const KafkaConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KafkaConnectRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
