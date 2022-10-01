// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMFADEVICEREQUEST_P_H
#define QTAWS_UNTAGMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "untagmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class UntagMFADeviceRequest;

class UntagMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    UntagMFADeviceRequestPrivate(const IamRequest::Action action,
                                   UntagMFADeviceRequest * const q);
    UntagMFADeviceRequestPrivate(const UntagMFADeviceRequestPrivate &other,
                                   UntagMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
