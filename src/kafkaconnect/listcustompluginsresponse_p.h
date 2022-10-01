// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMPLUGINSRESPONSE_P_H
#define QTAWS_LISTCUSTOMPLUGINSRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class ListCustomPluginsResponse;

class ListCustomPluginsResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit ListCustomPluginsResponsePrivate(ListCustomPluginsResponse * const q);

    void parseListCustomPluginsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomPluginsResponse)
    Q_DISABLE_COPY(ListCustomPluginsResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
