// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORREQUEST_P_H
#define QTAWS_DELETECONNECTORREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "deleteconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteConnectorRequest;

class DeleteConnectorRequestPrivate : public KafkaConnectRequestPrivate {

public:
    DeleteConnectorRequestPrivate(const KafkaConnectRequest::Action action,
                                   DeleteConnectorRequest * const q);
    DeleteConnectorRequestPrivate(const DeleteConnectorRequestPrivate &other,
                                   DeleteConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
