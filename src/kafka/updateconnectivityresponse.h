// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYRESPONSE_H
#define QTAWS_UPDATECONNECTIVITYRESPONSE_H

#include "kafkaresponse.h"
#include "updateconnectivityrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateConnectivityResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateConnectivityResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateConnectivityResponse(const UpdateConnectivityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectivityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectivityResponse)
    Q_DISABLE_COPY(UpdateConnectivityResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
