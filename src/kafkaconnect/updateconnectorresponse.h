// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORRESPONSE_H
#define QTAWS_UPDATECONNECTORRESPONSE_H

#include "kafkaconnectresponse.h"
#include "updateconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class UpdateConnectorResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT UpdateConnectorResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    UpdateConnectorResponse(const UpdateConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectorResponse)
    Q_DISABLE_COPY(UpdateConnectorResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
