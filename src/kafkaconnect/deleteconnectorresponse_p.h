// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORRESPONSE_P_H
#define QTAWS_DELETECONNECTORRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteConnectorResponse;

class DeleteConnectorResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit DeleteConnectorResponsePrivate(DeleteConnectorResponse * const q);

    void parseDeleteConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectorResponse)
    Q_DISABLE_COPY(DeleteConnectorResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
