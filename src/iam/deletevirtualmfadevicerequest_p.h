// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALMFADEVICEREQUEST_P_H
#define QTAWS_DELETEVIRTUALMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "deletevirtualmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class DeleteVirtualMFADeviceRequest;

class DeleteVirtualMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    DeleteVirtualMFADeviceRequestPrivate(const IamRequest::Action action,
                                   DeleteVirtualMFADeviceRequest * const q);
    DeleteVirtualMFADeviceRequestPrivate(const DeleteVirtualMFADeviceRequestPrivate &other,
                                   DeleteVirtualMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
