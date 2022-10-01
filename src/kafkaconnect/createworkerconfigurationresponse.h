// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEWORKERCONFIGURATIONRESPONSE_H

#include "kafkaconnectresponse.h"
#include "createworkerconfigurationrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateWorkerConfigurationResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT CreateWorkerConfigurationResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    CreateWorkerConfigurationResponse(const CreateWorkerConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkerConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkerConfigurationResponse)
    Q_DISABLE_COPY(CreateWorkerConfigurationResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
