// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPMONITORREQUEST_P_H
#define QTAWS_UPDATEAPPMONITORREQUEST_P_H

#include "rumrequest_p.h"
#include "updateappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class UpdateAppMonitorRequest;

class UpdateAppMonitorRequestPrivate : public RumRequestPrivate {

public:
    UpdateAppMonitorRequestPrivate(const RumRequest::Action action,
                                   UpdateAppMonitorRequest * const q);
    UpdateAppMonitorRequestPrivate(const UpdateAppMonitorRequestPrivate &other,
                                   UpdateAppMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
