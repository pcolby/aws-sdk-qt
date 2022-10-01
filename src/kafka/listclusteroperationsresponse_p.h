// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTEROPERATIONSRESPONSE_P_H
#define QTAWS_LISTCLUSTEROPERATIONSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class ListClusterOperationsResponse;

class ListClusterOperationsResponsePrivate : public KafkaResponsePrivate {

public:

    explicit ListClusterOperationsResponsePrivate(ListClusterOperationsResponse * const q);

    void parseListClusterOperationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClusterOperationsResponse)
    Q_DISABLE_COPY(ListClusterOperationsResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
