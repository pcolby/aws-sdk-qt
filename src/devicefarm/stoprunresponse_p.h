// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRUNRESPONSE_P_H
#define QTAWS_STOPRUNRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class StopRunResponse;

class StopRunResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit StopRunResponsePrivate(StopRunResponse * const q);

    void parseStopRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopRunResponse)
    Q_DISABLE_COPY(StopRunResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
