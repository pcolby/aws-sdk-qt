// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULERUNRESPONSE_P_H
#define QTAWS_SCHEDULERUNRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ScheduleRunResponse;

class ScheduleRunResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ScheduleRunResponsePrivate(ScheduleRunResponse * const q);

    void parseScheduleRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ScheduleRunResponse)
    Q_DISABLE_COPY(ScheduleRunResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
