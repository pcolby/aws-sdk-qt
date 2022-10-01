// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMOTEACCESSSESSIONREQUEST_P_H
#define QTAWS_GETREMOTEACCESSSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetRemoteAccessSessionRequest;

class GetRemoteAccessSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetRemoteAccessSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetRemoteAccessSessionRequest * const q);
    GetRemoteAccessSessionRequestPrivate(const GetRemoteAccessSessionRequestPrivate &other,
                                   GetRemoteAccessSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
