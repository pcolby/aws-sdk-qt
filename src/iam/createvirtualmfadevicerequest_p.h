// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALMFADEVICEREQUEST_P_H
#define QTAWS_CREATEVIRTUALMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "createvirtualmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class CreateVirtualMFADeviceRequest;

class CreateVirtualMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    CreateVirtualMFADeviceRequestPrivate(const IamRequest::Action action,
                                   CreateVirtualMFADeviceRequest * const q);
    CreateVirtualMFADeviceRequestPrivate(const CreateVirtualMFADeviceRequestPrivate &other,
                                   CreateVirtualMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVirtualMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
