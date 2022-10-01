// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSOVERRIDEREQUEST_P_H
#define QTAWS_GETMOBILEDEVICEACCESSOVERRIDEREQUEST_P_H

#include "workmailrequest_p.h"
#include "getmobiledeviceaccessoverriderequest.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessOverrideRequest;

class GetMobileDeviceAccessOverrideRequestPrivate : public WorkMailRequestPrivate {

public:
    GetMobileDeviceAccessOverrideRequestPrivate(const WorkMailRequest::Action action,
                                   GetMobileDeviceAccessOverrideRequest * const q);
    GetMobileDeviceAccessOverrideRequestPrivate(const GetMobileDeviceAccessOverrideRequestPrivate &other,
                                   GetMobileDeviceAccessOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMobileDeviceAccessOverrideRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
