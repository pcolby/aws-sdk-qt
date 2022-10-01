// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKAFKAVERSIONSRESPONSE_P_H
#define QTAWS_LISTKAFKAVERSIONSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class ListKafkaVersionsResponse;

class ListKafkaVersionsResponsePrivate : public KafkaResponsePrivate {

public:

    explicit ListKafkaVersionsResponsePrivate(ListKafkaVersionsResponse * const q);

    void parseListKafkaVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKafkaVersionsResponse)
    Q_DISABLE_COPY(ListKafkaVersionsResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
