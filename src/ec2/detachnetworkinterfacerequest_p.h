// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHNETWORKINTERFACEREQUEST_P_H
#define QTAWS_DETACHNETWORKINTERFACEREQUEST_P_H

#include "ec2request_p.h"
#include "detachnetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class DetachNetworkInterfaceRequest;

class DetachNetworkInterfaceRequestPrivate : public Ec2RequestPrivate {

public:
    DetachNetworkInterfaceRequestPrivate(const Ec2Request::Action action,
                                   DetachNetworkInterfaceRequest * const q);
    DetachNetworkInterfaceRequestPrivate(const DetachNetworkInterfaceRequestPrivate &other,
                                   DetachNetworkInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
