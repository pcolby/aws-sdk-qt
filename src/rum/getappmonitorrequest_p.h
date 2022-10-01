// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORREQUEST_P_H
#define QTAWS_GETAPPMONITORREQUEST_P_H

#include "rumrequest_p.h"
#include "getappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorRequest;

class GetAppMonitorRequestPrivate : public RumRequestPrivate {

public:
    GetAppMonitorRequestPrivate(const RumRequest::Action action,
                                   GetAppMonitorRequest * const q);
    GetAppMonitorRequestPrivate(const GetAppMonitorRequestPrivate &other,
                                   GetAppMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
