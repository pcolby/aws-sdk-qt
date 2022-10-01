// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKAFKAVERSIONSRESPONSE_H
#define QTAWS_LISTKAFKAVERSIONSRESPONSE_H

#include "kafkaresponse.h"
#include "listkafkaversionsrequest.h"

namespace QtAws {
namespace Kafka {

class ListKafkaVersionsResponsePrivate;

class QTAWSKAFKA_EXPORT ListKafkaVersionsResponse : public KafkaResponse {
    Q_OBJECT

public:
    ListKafkaVersionsResponse(const ListKafkaVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKafkaVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKafkaVersionsResponse)
    Q_DISABLE_COPY(ListKafkaVersionsResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
