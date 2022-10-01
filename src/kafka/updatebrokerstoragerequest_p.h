// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERSTORAGEREQUEST_P_H
#define QTAWS_UPDATEBROKERSTORAGEREQUEST_P_H

#include "kafkarequest_p.h"
#include "updatebrokerstoragerequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerStorageRequest;

class UpdateBrokerStorageRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateBrokerStorageRequestPrivate(const KafkaRequest::Action action,
                                   UpdateBrokerStorageRequest * const q);
    UpdateBrokerStorageRequestPrivate(const UpdateBrokerStorageRequestPrivate &other,
                                   UpdateBrokerStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerStorageRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
