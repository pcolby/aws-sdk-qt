// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULERUNREQUEST_P_H
#define QTAWS_SCHEDULERUNREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "schedulerunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ScheduleRunRequest;

class ScheduleRunRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ScheduleRunRequestPrivate(const DeviceFarmRequest::Action action,
                                   ScheduleRunRequest * const q);
    ScheduleRunRequestPrivate(const ScheduleRunRequestPrivate &other,
                                   ScheduleRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(ScheduleRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
