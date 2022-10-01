// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEIDENTIFIERREQUEST_P_H
#define QTAWS_GETDEVICEIDENTIFIERREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "getdeviceidentifierrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetDeviceIdentifierRequest;

class GetDeviceIdentifierRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    GetDeviceIdentifierRequestPrivate(const PrivateNetworksRequest::Action action,
                                   GetDeviceIdentifierRequest * const q);
    GetDeviceIdentifierRequestPrivate(const GetDeviceIdentifierRequestPrivate &other,
                                   GetDeviceIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceIdentifierRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
