// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMPLUGINREQUEST_P_H
#define QTAWS_CREATECUSTOMPLUGINREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "createcustompluginrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateCustomPluginRequest;

class CreateCustomPluginRequestPrivate : public KafkaConnectRequestPrivate {

public:
    CreateCustomPluginRequestPrivate(const KafkaConnectRequest::Action action,
                                   CreateCustomPluginRequest * const q);
    CreateCustomPluginRequestPrivate(const CreateCustomPluginRequestPrivate &other,
                                   CreateCustomPluginRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomPluginRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
