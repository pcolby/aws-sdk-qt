// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTCONFIGURATIONSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class ListConfigurationsResponse;

class ListConfigurationsResponsePrivate : public KafkaResponsePrivate {

public:

    explicit ListConfigurationsResponsePrivate(ListConfigurationsResponse * const q);

    void parseListConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigurationsResponse)
    Q_DISABLE_COPY(ListConfigurationsResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
