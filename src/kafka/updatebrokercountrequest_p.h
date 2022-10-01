// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERCOUNTREQUEST_P_H
#define QTAWS_UPDATEBROKERCOUNTREQUEST_P_H

#include "kafkarequest_p.h"
#include "updatebrokercountrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerCountRequest;

class UpdateBrokerCountRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateBrokerCountRequestPrivate(const KafkaRequest::Action action,
                                   UpdateBrokerCountRequest * const q);
    UpdateBrokerCountRequestPrivate(const UpdateBrokerCountRequestPrivate &other,
                                   UpdateBrokerCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerCountRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
