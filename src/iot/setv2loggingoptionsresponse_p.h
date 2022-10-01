// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_SETV2LOGGINGOPTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingOptionsResponse;

class SetV2LoggingOptionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit SetV2LoggingOptionsResponsePrivate(SetV2LoggingOptionsResponse * const q);

    void parseSetV2LoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetV2LoggingOptionsResponse)
    Q_DISABLE_COPY(SetV2LoggingOptionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
