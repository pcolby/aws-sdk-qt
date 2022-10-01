// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSTALLTOREMOTEACCESSSESSIONREQUEST_P_H
#define QTAWS_INSTALLTOREMOTEACCESSSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "installtoremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class InstallToRemoteAccessSessionRequest;

class InstallToRemoteAccessSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    InstallToRemoteAccessSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   InstallToRemoteAccessSessionRequest * const q);
    InstallToRemoteAccessSessionRequestPrivate(const InstallToRemoteAccessSessionRequestPrivate &other,
                                   InstallToRemoteAccessSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(InstallToRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
