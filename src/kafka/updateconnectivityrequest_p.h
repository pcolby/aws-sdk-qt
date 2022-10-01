// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYREQUEST_P_H
#define QTAWS_UPDATECONNECTIVITYREQUEST_P_H

#include "kafkarequest_p.h"
#include "updateconnectivityrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateConnectivityRequest;

class UpdateConnectivityRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateConnectivityRequestPrivate(const KafkaRequest::Action action,
                                   UpdateConnectivityRequest * const q);
    UpdateConnectivityRequestPrivate(const UpdateConnectivityRequestPrivate &other,
                                   UpdateConnectivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectivityRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
