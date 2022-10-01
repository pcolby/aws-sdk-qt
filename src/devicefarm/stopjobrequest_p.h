// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBREQUEST_P_H
#define QTAWS_STOPJOBREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "stopjobrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopJobRequest;

class StopJobRequestPrivate : public DeviceFarmRequestPrivate {

public:
    StopJobRequestPrivate(const DeviceFarmRequest::Action action,
                                   StopJobRequest * const q);
    StopJobRequestPrivate(const StopJobRequestPrivate &other,
                                   StopJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopJobRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
