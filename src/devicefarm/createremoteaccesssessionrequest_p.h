// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREMOTEACCESSSESSIONREQUEST_P_H
#define QTAWS_CREATEREMOTEACCESSSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateRemoteAccessSessionRequest;

class CreateRemoteAccessSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateRemoteAccessSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateRemoteAccessSessionRequest * const q);
    CreateRemoteAccessSessionRequestPrivate(const CreateRemoteAccessSessionRequestPrivate &other,
                                   CreateRemoteAccessSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
