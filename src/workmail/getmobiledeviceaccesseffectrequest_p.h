// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSEFFECTREQUEST_P_H
#define QTAWS_GETMOBILEDEVICEACCESSEFFECTREQUEST_P_H

#include "workmailrequest_p.h"
#include "getmobiledeviceaccesseffectrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessEffectRequest;

class GetMobileDeviceAccessEffectRequestPrivate : public WorkMailRequestPrivate {

public:
    GetMobileDeviceAccessEffectRequestPrivate(const WorkMailRequest::Action action,
                                   GetMobileDeviceAccessEffectRequest * const q);
    GetMobileDeviceAccessEffectRequestPrivate(const GetMobileDeviceAccessEffectRequestPrivate &other,
                                   GetMobileDeviceAccessEffectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMobileDeviceAccessEffectRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
