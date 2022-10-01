// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOOTSTRAPBROKERSRESPONSE_P_H
#define QTAWS_GETBOOTSTRAPBROKERSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class GetBootstrapBrokersResponse;

class GetBootstrapBrokersResponsePrivate : public KafkaResponsePrivate {

public:

    explicit GetBootstrapBrokersResponsePrivate(GetBootstrapBrokersResponse * const q);

    void parseGetBootstrapBrokersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBootstrapBrokersResponse)
    Q_DISABLE_COPY(GetBootstrapBrokersResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
