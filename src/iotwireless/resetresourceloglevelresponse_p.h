// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETRESOURCELOGLEVELRESPONSE_P_H
#define QTAWS_RESETRESOURCELOGLEVELRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ResetResourceLogLevelResponse;

class ResetResourceLogLevelResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ResetResourceLogLevelResponsePrivate(ResetResourceLogLevelResponse * const q);

    void parseResetResourceLogLevelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetResourceLogLevelResponse)
    Q_DISABLE_COPY(ResetResourceLogLevelResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
