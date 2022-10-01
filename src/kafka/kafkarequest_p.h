// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKAREQUEST_P_H
#define QTAWS_KAFKAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class KafkaRequest;

class KafkaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KafkaRequest::Action action; ///< Kafka action to be performed.
    QString apiVersion;        ///< Kafka API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Kafka request (query string) parameters. @todo?

    KafkaRequestPrivate(const KafkaRequest::Action action, KafkaRequest * const q);
    KafkaRequestPrivate(const KafkaRequestPrivate &other, KafkaRequest * const q);

    static QString toString(const KafkaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KafkaRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
