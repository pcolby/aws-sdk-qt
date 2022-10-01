// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERSTORAGERESPONSE_H
#define QTAWS_UPDATEBROKERSTORAGERESPONSE_H

#include "kafkaresponse.h"
#include "updatebrokerstoragerequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerStorageResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateBrokerStorageResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateBrokerStorageResponse(const UpdateBrokerStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBrokerStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerStorageResponse)
    Q_DISABLE_COPY(UpdateBrokerStorageResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
