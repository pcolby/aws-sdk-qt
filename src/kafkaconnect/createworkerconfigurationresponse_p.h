// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEWORKERCONFIGURATIONRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class CreateWorkerConfigurationResponse;

class CreateWorkerConfigurationResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit CreateWorkerConfigurationResponsePrivate(CreateWorkerConfigurationResponse * const q);

    void parseCreateWorkerConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkerConfigurationResponse)
    Q_DISABLE_COPY(CreateWorkerConfigurationResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
