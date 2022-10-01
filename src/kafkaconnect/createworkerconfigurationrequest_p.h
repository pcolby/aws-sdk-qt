// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEWORKERCONFIGURATIONREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "createworkerconfigurationrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateWorkerConfigurationRequest;

class CreateWorkerConfigurationRequestPrivate : public KafkaConnectRequestPrivate {

public:
    CreateWorkerConfigurationRequestPrivate(const KafkaConnectRequest::Action action,
                                   CreateWorkerConfigurationRequest * const q);
    CreateWorkerConfigurationRequestPrivate(const CreateWorkerConfigurationRequestPrivate &other,
                                   CreateWorkerConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkerConfigurationRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
