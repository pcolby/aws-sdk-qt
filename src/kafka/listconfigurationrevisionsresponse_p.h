// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONREVISIONSRESPONSE_P_H
#define QTAWS_LISTCONFIGURATIONREVISIONSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class ListConfigurationRevisionsResponse;

class ListConfigurationRevisionsResponsePrivate : public KafkaResponsePrivate {

public:

    explicit ListConfigurationRevisionsResponsePrivate(ListConfigurationRevisionsResponse * const q);

    void parseListConfigurationRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigurationRevisionsResponse)
    Q_DISABLE_COPY(ListConfigurationRevisionsResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
