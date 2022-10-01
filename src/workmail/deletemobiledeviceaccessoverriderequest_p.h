// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDEREQUEST_P_H
#define QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDEREQUEST_P_H

#include "workmailrequest_p.h"
#include "deletemobiledeviceaccessoverriderequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessOverrideRequest;

class DeleteMobileDeviceAccessOverrideRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteMobileDeviceAccessOverrideRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteMobileDeviceAccessOverrideRequest * const q);
    DeleteMobileDeviceAccessOverrideRequestPrivate(const DeleteMobileDeviceAccessOverrideRequestPrivate &other,
                                   DeleteMobileDeviceAccessOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMobileDeviceAccessOverrideRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
