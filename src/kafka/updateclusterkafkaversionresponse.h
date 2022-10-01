// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERKAFKAVERSIONRESPONSE_H
#define QTAWS_UPDATECLUSTERKAFKAVERSIONRESPONSE_H

#include "kafkaresponse.h"
#include "updateclusterkafkaversionrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterKafkaVersionResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateClusterKafkaVersionResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateClusterKafkaVersionResponse(const UpdateClusterKafkaVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterKafkaVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterKafkaVersionResponse)
    Q_DISABLE_COPY(UpdateClusterKafkaVersionResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
