// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORRESPONSE_P_H
#define QTAWS_UPDATECONNECTORRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class UpdateConnectorResponse;

class UpdateConnectorResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit UpdateConnectorResponsePrivate(UpdateConnectorResponse * const q);

    void parseUpdateConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorResponse)
    Q_DISABLE_COPY(UpdateConnectorResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
