// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEDEVICEIDENTIFIERREQUEST_P_H
#define QTAWS_ACTIVATEDEVICEIDENTIFIERREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "activatedeviceidentifierrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateDeviceIdentifierRequest;

class ActivateDeviceIdentifierRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ActivateDeviceIdentifierRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ActivateDeviceIdentifierRequest * const q);
    ActivateDeviceIdentifierRequestPrivate(const ActivateDeviceIdentifierRequestPrivate &other,
                                   ActivateDeviceIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateDeviceIdentifierRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
