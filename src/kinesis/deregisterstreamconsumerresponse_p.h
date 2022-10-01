// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSTREAMCONSUMERRESPONSE_P_H
#define QTAWS_DEREGISTERSTREAMCONSUMERRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DeregisterStreamConsumerResponse;

class DeregisterStreamConsumerResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DeregisterStreamConsumerResponsePrivate(DeregisterStreamConsumerResponse * const q);

    void parseDeregisterStreamConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterStreamConsumerResponse)
    Q_DISABLE_COPY(DeregisterStreamConsumerResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
