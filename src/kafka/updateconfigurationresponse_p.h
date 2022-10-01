// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateConfigurationResponse;

class UpdateConfigurationResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateConfigurationResponsePrivate(UpdateConfigurationResponse * const q);

    void parseUpdateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationResponse)
    Q_DISABLE_COPY(UpdateConfigurationResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
