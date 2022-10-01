// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERKAFKAVERSIONRESPONSE_P_H
#define QTAWS_UPDATECLUSTERKAFKAVERSIONRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterKafkaVersionResponse;

class UpdateClusterKafkaVersionResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateClusterKafkaVersionResponsePrivate(UpdateClusterKafkaVersionResponse * const q);

    void parseUpdateClusterKafkaVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterKafkaVersionResponse)
    Q_DISABLE_COPY(UpdateClusterKafkaVersionResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
