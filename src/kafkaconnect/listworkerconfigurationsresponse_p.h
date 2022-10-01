// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTWORKERCONFIGURATIONSRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class ListWorkerConfigurationsResponse;

class ListWorkerConfigurationsResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit ListWorkerConfigurationsResponsePrivate(ListWorkerConfigurationsResponse * const q);

    void parseListWorkerConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkerConfigurationsResponse)
    Q_DISABLE_COPY(ListWorkerConfigurationsResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
