// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERTYPEREQUEST_P_H
#define QTAWS_UPDATEBROKERTYPEREQUEST_P_H

#include "kafkarequest_p.h"
#include "updatebrokertyperequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerTypeRequest;

class UpdateBrokerTypeRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateBrokerTypeRequestPrivate(const KafkaRequest::Action action,
                                   UpdateBrokerTypeRequest * const q);
    UpdateBrokerTypeRequestPrivate(const UpdateBrokerTypeRequestPrivate &other,
                                   UpdateBrokerTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerTypeRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
