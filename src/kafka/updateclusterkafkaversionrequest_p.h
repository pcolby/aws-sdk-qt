// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERKAFKAVERSIONREQUEST_P_H
#define QTAWS_UPDATECLUSTERKAFKAVERSIONREQUEST_P_H

#include "kafkarequest_p.h"
#include "updateclusterkafkaversionrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterKafkaVersionRequest;

class UpdateClusterKafkaVersionRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateClusterKafkaVersionRequestPrivate(const KafkaRequest::Action action,
                                   UpdateClusterKafkaVersionRequest * const q);
    UpdateClusterKafkaVersionRequestPrivate(const UpdateClusterKafkaVersionRequestPrivate &other,
                                   UpdateClusterKafkaVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterKafkaVersionRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
