// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATECLUSTERCONFIGURATIONRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateClusterConfigurationResponse;

class UpdateClusterConfigurationResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateClusterConfigurationResponsePrivate(UpdateClusterConfigurationResponse * const q);

    void parseUpdateClusterConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterConfigurationResponse)
    Q_DISABLE_COPY(UpdateClusterConfigurationResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
