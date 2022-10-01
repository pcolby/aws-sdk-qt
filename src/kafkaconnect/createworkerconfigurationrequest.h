// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERCONFIGURATIONREQUEST_H
#define QTAWS_CREATEWORKERCONFIGURATIONREQUEST_H

#include "kafkaconnectrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateWorkerConfigurationRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT CreateWorkerConfigurationRequest : public KafkaConnectRequest {

public:
    CreateWorkerConfigurationRequest(const CreateWorkerConfigurationRequest &other);
    CreateWorkerConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkerConfigurationRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
