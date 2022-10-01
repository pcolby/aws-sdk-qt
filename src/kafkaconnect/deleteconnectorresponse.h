// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORRESPONSE_H
#define QTAWS_DELETECONNECTORRESPONSE_H

#include "kafkaconnectresponse.h"
#include "deleteconnectorrequest.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteConnectorResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT DeleteConnectorResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    DeleteConnectorResponse(const DeleteConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorResponse)
    Q_DISABLE_COPY(DeleteConnectorResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
