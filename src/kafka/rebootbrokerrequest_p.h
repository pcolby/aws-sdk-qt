// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTBROKERREQUEST_P_H
#define QTAWS_REBOOTBROKERREQUEST_P_H

#include "kafkarequest_p.h"
#include "rebootbrokerrequest.h"

namespace QtAws {
namespace Kafka {

class RebootBrokerRequest;

class RebootBrokerRequestPrivate : public KafkaRequestPrivate {

public:
    RebootBrokerRequestPrivate(const KafkaRequest::Action action,
                                   RebootBrokerRequest * const q);
    RebootBrokerRequestPrivate(const RebootBrokerRequestPrivate &other,
                                   RebootBrokerRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootBrokerRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
