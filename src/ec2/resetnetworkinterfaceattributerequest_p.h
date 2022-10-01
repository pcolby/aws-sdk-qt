// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETNETWORKINTERFACEATTRIBUTEREQUEST_P_H
#define QTAWS_RESETNETWORKINTERFACEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "resetnetworkinterfaceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetNetworkInterfaceAttributeRequest;

class ResetNetworkInterfaceAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ResetNetworkInterfaceAttributeRequestPrivate(const Ec2Request::Action action,
                                   ResetNetworkInterfaceAttributeRequest * const q);
    ResetNetworkInterfaceAttributeRequestPrivate(const ResetNetworkInterfaceAttributeRequestPrivate &other,
                                   ResetNetworkInterfaceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetNetworkInterfaceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
