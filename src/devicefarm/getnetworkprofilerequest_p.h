// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKPROFILEREQUEST_P_H
#define QTAWS_GETNETWORKPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getnetworkprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetNetworkProfileRequest;

class GetNetworkProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetNetworkProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetNetworkProfileRequest * const q);
    GetNetworkProfileRequestPrivate(const GetNetworkProfileRequestPrivate &other,
                                   GetNetworkProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
