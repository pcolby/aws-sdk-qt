// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class DeleteConfigurationResponse;

class DeleteConfigurationResponsePrivate : public KafkaResponsePrivate {

public:

    explicit DeleteConfigurationResponsePrivate(DeleteConfigurationResponse * const q);

    void parseDeleteConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationResponse)
    Q_DISABLE_COPY(DeleteConfigurationResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
