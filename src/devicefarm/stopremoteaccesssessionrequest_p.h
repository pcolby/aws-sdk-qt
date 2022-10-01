// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREMOTEACCESSSESSIONREQUEST_P_H
#define QTAWS_STOPREMOTEACCESSSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "stopremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopRemoteAccessSessionRequest;

class StopRemoteAccessSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    StopRemoteAccessSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   StopRemoteAccessSessionRequest * const q);
    StopRemoteAccessSessionRequestPrivate(const StopRemoteAccessSessionRequestPrivate &other,
                                   StopRemoteAccessSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
