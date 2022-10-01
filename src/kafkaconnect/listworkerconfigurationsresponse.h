// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTWORKERCONFIGURATIONSRESPONSE_H

#include "kafkaconnectresponse.h"
#include "listworkerconfigurationsrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListWorkerConfigurationsResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT ListWorkerConfigurationsResponse : public KafkaConnectResponse {
    Q_OBJECT

public:
    ListWorkerConfigurationsResponse(const ListWorkerConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkerConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkerConfigurationsResponse)
    Q_DISABLE_COPY(ListWorkerConfigurationsResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
