// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEKAFKAVERSIONSRESPONSE_H
#define QTAWS_GETCOMPATIBLEKAFKAVERSIONSRESPONSE_H

#include "kafkaresponse.h"
#include "getcompatiblekafkaversionsrequest.h"

namespace QtAws {
namespace Kafka {

class GetCompatibleKafkaVersionsResponsePrivate;

class QTAWSKAFKA_EXPORT GetCompatibleKafkaVersionsResponse : public KafkaResponse {
    Q_OBJECT

public:
    GetCompatibleKafkaVersionsResponse(const GetCompatibleKafkaVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCompatibleKafkaVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCompatibleKafkaVersionsResponse)
    Q_DISABLE_COPY(GetCompatibleKafkaVersionsResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
