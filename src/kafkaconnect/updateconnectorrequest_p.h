// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORREQUEST_P_H
#define QTAWS_UPDATECONNECTORREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "updateconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class UpdateConnectorRequest;

class UpdateConnectorRequestPrivate : public KafkaConnectRequestPrivate {

public:
    UpdateConnectorRequestPrivate(const KafkaConnectRequest::Action action,
                                   UpdateConnectorRequest * const q);
    UpdateConnectorRequestPrivate(const UpdateConnectorRequestPrivate &other,
                                   UpdateConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
