// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERCOUNTRESPONSE_H
#define QTAWS_UPDATEBROKERCOUNTRESPONSE_H

#include "kafkaresponse.h"
#include "updatebrokercountrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerCountResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateBrokerCountResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateBrokerCountResponse(const UpdateBrokerCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBrokerCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerCountResponse)
    Q_DISABLE_COPY(UpdateBrokerCountResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
