// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELOGLEVELRESPONSE_P_H
#define QTAWS_GETRESOURCELOGLEVELRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceLogLevelResponse;

class GetResourceLogLevelResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetResourceLogLevelResponsePrivate(GetResourceLogLevelResponse * const q);

    void parseGetResourceLogLevelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceLogLevelResponse)
    Q_DISABLE_COPY(GetResourceLogLevelResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
