// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERTYPERESPONSE_P_H
#define QTAWS_UPDATEBROKERTYPERESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerTypeResponse;

class UpdateBrokerTypeResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateBrokerTypeResponsePrivate(UpdateBrokerTypeResponse * const q);

    void parseUpdateBrokerTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerTypeResponse)
    Q_DISABLE_COPY(UpdateBrokerTypeResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
