// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGREQUEST_P_H
#define QTAWS_UPDATEMONITORINGREQUEST_P_H

#include "kafkarequest_p.h"
#include "updatemonitoringrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateMonitoringRequest;

class UpdateMonitoringRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateMonitoringRequestPrivate(const KafkaRequest::Action action,
                                   UpdateMonitoringRequest * const q);
    UpdateMonitoringRequestPrivate(const UpdateMonitoringRequestPrivate &other,
                                   UpdateMonitoringRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMonitoringRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
