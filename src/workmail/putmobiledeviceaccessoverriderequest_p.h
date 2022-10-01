// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMOBILEDEVICEACCESSOVERRIDEREQUEST_P_H
#define QTAWS_PUTMOBILEDEVICEACCESSOVERRIDEREQUEST_P_H

#include "workmailrequest_p.h"
#include "putmobiledeviceaccessoverriderequest.h"

namespace QtAws {
namespace WorkMail {

class PutMobileDeviceAccessOverrideRequest;

class PutMobileDeviceAccessOverrideRequestPrivate : public WorkMailRequestPrivate {

public:
    PutMobileDeviceAccessOverrideRequestPrivate(const WorkMailRequest::Action action,
                                   PutMobileDeviceAccessOverrideRequest * const q);
    PutMobileDeviceAccessOverrideRequestPrivate(const PutMobileDeviceAccessOverrideRequestPrivate &other,
                                   PutMobileDeviceAccessOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMobileDeviceAccessOverrideRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
