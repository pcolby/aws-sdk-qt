// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMFADEVICEREQUEST_P_H
#define QTAWS_ENABLEMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "enablemfadevicerequest.h"

namespace QtAws {
namespace Iam {

class EnableMFADeviceRequest;

class EnableMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    EnableMFADeviceRequestPrivate(const IamRequest::Action action,
                                   EnableMFADeviceRequest * const q);
    EnableMFADeviceRequestPrivate(const EnableMFADeviceRequestPrivate &other,
                                   EnableMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
