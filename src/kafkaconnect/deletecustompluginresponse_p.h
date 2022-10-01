// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMPLUGINRESPONSE_P_H
#define QTAWS_DELETECUSTOMPLUGINRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class DeleteCustomPluginResponse;

class DeleteCustomPluginResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit DeleteCustomPluginResponsePrivate(DeleteCustomPluginResponse * const q);

    void parseDeleteCustomPluginResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomPluginResponse)
    Q_DISABLE_COPY(DeleteCustomPluginResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
