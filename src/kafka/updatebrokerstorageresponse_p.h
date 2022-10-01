// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERSTORAGERESPONSE_P_H
#define QTAWS_UPDATEBROKERSTORAGERESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateBrokerStorageResponse;

class UpdateBrokerStorageResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateBrokerStorageResponsePrivate(UpdateBrokerStorageResponse * const q);

    void parseUpdateBrokerStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerStorageResponse)
    Q_DISABLE_COPY(UpdateBrokerStorageResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
