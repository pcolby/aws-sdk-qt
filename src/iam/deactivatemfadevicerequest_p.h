// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEMFADEVICEREQUEST_P_H
#define QTAWS_DEACTIVATEMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "deactivatemfadevicerequest.h"

namespace QtAws {
namespace Iam {

class DeactivateMFADeviceRequest;

class DeactivateMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    DeactivateMFADeviceRequestPrivate(const IamRequest::Action action,
                                   DeactivateMFADeviceRequest * const q);
    DeactivateMFADeviceRequestPrivate(const DeactivateMFADeviceRequestPrivate &other,
                                   DeactivateMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
