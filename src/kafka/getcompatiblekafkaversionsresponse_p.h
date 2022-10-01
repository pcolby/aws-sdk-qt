// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEKAFKAVERSIONSRESPONSE_P_H
#define QTAWS_GETCOMPATIBLEKAFKAVERSIONSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class GetCompatibleKafkaVersionsResponse;

class GetCompatibleKafkaVersionsResponsePrivate : public KafkaResponsePrivate {

public:

    explicit GetCompatibleKafkaVersionsResponsePrivate(GetCompatibleKafkaVersionsResponse * const q);

    void parseGetCompatibleKafkaVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCompatibleKafkaVersionsResponse)
    Q_DISABLE_COPY(GetCompatibleKafkaVersionsResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
