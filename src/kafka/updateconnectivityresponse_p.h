// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYRESPONSE_P_H
#define QTAWS_UPDATECONNECTIVITYRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateConnectivityResponse;

class UpdateConnectivityResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateConnectivityResponsePrivate(UpdateConnectivityResponse * const q);

    void parseUpdateConnectivityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectivityResponse)
    Q_DISABLE_COPY(UpdateConnectivityResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
