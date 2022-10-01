// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMADDRESSHISTORYREQUEST_P_H
#define QTAWS_GETIPAMADDRESSHISTORYREQUEST_P_H

#include "ec2request_p.h"
#include "getipamaddresshistoryrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamAddressHistoryRequest;

class GetIpamAddressHistoryRequestPrivate : public Ec2RequestPrivate {

public:
    GetIpamAddressHistoryRequestPrivate(const Ec2Request::Action action,
                                   GetIpamAddressHistoryRequest * const q);
    GetIpamAddressHistoryRequestPrivate(const GetIpamAddressHistoryRequestPrivate &other,
                                   GetIpamAddressHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIpamAddressHistoryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
