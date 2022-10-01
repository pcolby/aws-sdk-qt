// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRUNREQUEST_P_H
#define QTAWS_STOPRUNREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "stoprunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopRunRequest;

class StopRunRequestPrivate : public DeviceFarmRequestPrivate {

public:
    StopRunRequestPrivate(const DeviceFarmRequest::Action action,
                                   StopRunRequest * const q);
    StopRunRequestPrivate(const StopRunRequestPrivate &other,
                                   StopRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
