// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALARMSRESPONSE_P_H
#define QTAWS_GETALARMSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetAlarmsResponse;

class GetAlarmsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetAlarmsResponsePrivate(GetAlarmsResponse * const q);

    void parseGetAlarmsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAlarmsResponse)
    Q_DISABLE_COPY(GetAlarmsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
