// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCELOGLEVELRESPONSE_P_H
#define QTAWS_PUTRESOURCELOGLEVELRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class PutResourceLogLevelResponse;

class PutResourceLogLevelResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit PutResourceLogLevelResponsePrivate(PutResourceLogLevelResponse * const q);

    void parsePutResourceLogLevelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutResourceLogLevelResponse)
    Q_DISABLE_COPY(PutResourceLogLevelResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
