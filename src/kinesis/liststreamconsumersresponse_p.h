// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMCONSUMERSRESPONSE_P_H
#define QTAWS_LISTSTREAMCONSUMERSRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class ListStreamConsumersResponse;

class ListStreamConsumersResponsePrivate : public KinesisResponsePrivate {

public:

    explicit ListStreamConsumersResponsePrivate(ListStreamConsumersResponse * const q);

    void parseListStreamConsumersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamConsumersResponse)
    Q_DISABLE_COPY(ListStreamConsumersResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
