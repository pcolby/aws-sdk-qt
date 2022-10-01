// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORRESPONSE_P_H
#define QTAWS_CREATECONNECTORRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class CreateConnectorResponse;

class CreateConnectorResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit CreateConnectorResponsePrivate(CreateConnectorResponse * const q);

    void parseCreateConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectorResponse)
    Q_DISABLE_COPY(CreateConnectorResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
