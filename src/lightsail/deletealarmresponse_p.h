// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMRESPONSE_P_H
#define QTAWS_DELETEALARMRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteAlarmResponse;

class DeleteAlarmResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteAlarmResponsePrivate(DeleteAlarmResponse * const q);

    void parseDeleteAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlarmResponse)
    Q_DISABLE_COPY(DeleteAlarmResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
