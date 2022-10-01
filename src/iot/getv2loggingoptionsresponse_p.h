// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETV2LOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_GETV2LOGGINGOPTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetV2LoggingOptionsResponse;

class GetV2LoggingOptionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetV2LoggingOptionsResponsePrivate(GetV2LoggingOptionsResponse * const q);

    void parseGetV2LoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetV2LoggingOptionsResponse)
    Q_DISABLE_COPY(GetV2LoggingOptionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
