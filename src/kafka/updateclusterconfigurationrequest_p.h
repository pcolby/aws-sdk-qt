// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATECLUSTERCONFIGURATIONREQUEST_P_H

#include "kafkarequest_p.h"
#include "updateclusterconfigurationrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterConfigurationRequest;

class UpdateClusterConfigurationRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateClusterConfigurationRequestPrivate(const KafkaRequest::Action action,
                                   UpdateClusterConfigurationRequest * const q);
    UpdateClusterConfigurationRequestPrivate(const UpdateClusterConfigurationRequestPrivate &other,
                                   UpdateClusterConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterConfigurationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
