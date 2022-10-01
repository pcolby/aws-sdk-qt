// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEDEVICEIDENTIFIERREQUEST_P_H
#define QTAWS_DEACTIVATEDEVICEIDENTIFIERREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "deactivatedeviceidentifierrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeactivateDeviceIdentifierRequest;

class DeactivateDeviceIdentifierRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    DeactivateDeviceIdentifierRequestPrivate(const PrivateNetworksRequest::Action action,
                                   DeactivateDeviceIdentifierRequest * const q);
    DeactivateDeviceIdentifierRequestPrivate(const DeactivateDeviceIdentifierRequestPrivate &other,
                                   DeactivateDeviceIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateDeviceIdentifierRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
