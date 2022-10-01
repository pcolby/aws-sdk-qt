// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_PUTLOGGINGOPTIONSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class PutLoggingOptionsResponse;

class PutLoggingOptionsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit PutLoggingOptionsResponsePrivate(PutLoggingOptionsResponse * const q);

    void parsePutLoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLoggingOptionsResponse)
    Q_DISABLE_COPY(PutLoggingOptionsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
