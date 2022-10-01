// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSTREAMCONSUMERRESPONSE_P_H
#define QTAWS_REGISTERSTREAMCONSUMERRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class RegisterStreamConsumerResponse;

class RegisterStreamConsumerResponsePrivate : public KinesisResponsePrivate {

public:

    explicit RegisterStreamConsumerResponsePrivate(RegisterStreamConsumerResponse * const q);

    void parseRegisterStreamConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterStreamConsumerResponse)
    Q_DISABLE_COPY(RegisterStreamConsumerResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
