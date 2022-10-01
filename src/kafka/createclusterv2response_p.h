// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERV2RESPONSE_P_H
#define QTAWS_CREATECLUSTERV2RESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class CreateClusterV2Response;

class CreateClusterV2ResponsePrivate : public KafkaResponsePrivate {

public:

    explicit CreateClusterV2ResponsePrivate(CreateClusterV2Response * const q);

    void parseCreateClusterV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClusterV2Response)
    Q_DISABLE_COPY(CreateClusterV2ResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
