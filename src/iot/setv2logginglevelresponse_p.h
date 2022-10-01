// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGLEVELRESPONSE_P_H
#define QTAWS_SETV2LOGGINGLEVELRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingLevelResponse;

class SetV2LoggingLevelResponsePrivate : public IoTResponsePrivate {

public:

    explicit SetV2LoggingLevelResponsePrivate(SetV2LoggingLevelResponse * const q);

    void parseSetV2LoggingLevelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetV2LoggingLevelResponse)
    Q_DISABLE_COPY(SetV2LoggingLevelResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
