// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALARMRESPONSE_P_H
#define QTAWS_PUTALARMRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class PutAlarmResponse;

class PutAlarmResponsePrivate : public LightsailResponsePrivate {

public:

    explicit PutAlarmResponsePrivate(PutAlarmResponse * const q);

    void parsePutAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAlarmResponse)
    Q_DISABLE_COPY(PutAlarmResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
