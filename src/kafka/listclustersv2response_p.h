// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSV2RESPONSE_P_H
#define QTAWS_LISTCLUSTERSV2RESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class ListClustersV2Response;

class ListClustersV2ResponsePrivate : public KafkaResponsePrivate {

public:

    explicit ListClustersV2ResponsePrivate(ListClustersV2Response * const q);

    void parseListClustersV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClustersV2Response)
    Q_DISABLE_COPY(ListClustersV2ResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
