// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORDATAREQUEST_P_H
#define QTAWS_GETAPPMONITORDATAREQUEST_P_H

#include "rumrequest_p.h"
#include "getappmonitordatarequest.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorDataRequest;

class GetAppMonitorDataRequestPrivate : public RumRequestPrivate {

public:
    GetAppMonitorDataRequestPrivate(const RumRequest::Action action,
                                   GetAppMonitorDataRequest * const q);
    GetAppMonitorDataRequestPrivate(const GetAppMonitorDataRequestPrivate &other,
                                   GetAppMonitorDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppMonitorDataRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
