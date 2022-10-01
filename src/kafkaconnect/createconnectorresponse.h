// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORRESPONSE_H
#define QTAWS_CREATECONNECTORRESPONSE_H

#include "kafkaconnectresponse.h"
#include "createconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class CreateConnectorResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT CreateConnectorResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    CreateConnectorResponse(const CreateConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectorResponse)
    Q_DISABLE_COPY(CreateConnectorResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
