// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRAMSECRETSRESPONSE_P_H
#define QTAWS_LISTSCRAMSECRETSRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class ListScramSecretsResponse;

class ListScramSecretsResponsePrivate : public KafkaResponsePrivate {

public:

    explicit ListScramSecretsResponsePrivate(ListScramSecretsResponse * const q);

    void parseListScramSecretsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListScramSecretsResponse)
    Q_DISABLE_COPY(ListScramSecretsResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
