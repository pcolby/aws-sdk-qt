// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMOTEACCESSSESSIONREQUEST_P_H
#define QTAWS_DELETEREMOTEACCESSSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deleteremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRemoteAccessSessionRequest;

class DeleteRemoteAccessSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteRemoteAccessSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteRemoteAccessSessionRequest * const q);
    DeleteRemoteAccessSessionRequestPrivate(const DeleteRemoteAccessSessionRequestPrivate &other,
                                   DeleteRemoteAccessSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
