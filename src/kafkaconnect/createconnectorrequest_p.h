// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORREQUEST_P_H
#define QTAWS_CREATECONNECTORREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "createconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateConnectorRequest;

class CreateConnectorRequestPrivate : public KafkaConnectRequestPrivate {

public:
    CreateConnectorRequestPrivate(const KafkaConnectRequest::Action action,
                                   CreateConnectorRequest * const q);
    CreateConnectorRequestPrivate(const CreateConnectorRequestPrivate &other,
                                   CreateConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectorRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
