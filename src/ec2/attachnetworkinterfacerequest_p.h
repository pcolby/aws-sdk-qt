// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHNETWORKINTERFACEREQUEST_P_H
#define QTAWS_ATTACHNETWORKINTERFACEREQUEST_P_H

#include "ec2request_p.h"
#include "attachnetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class AttachNetworkInterfaceRequest;

class AttachNetworkInterfaceRequestPrivate : public Ec2RequestPrivate {

public:
    AttachNetworkInterfaceRequestPrivate(const Ec2Request::Action action,
                                   AttachNetworkInterfaceRequest * const q);
    AttachNetworkInterfaceRequestPrivate(const AttachNetworkInterfaceRequestPrivate &other,
                                   AttachNetworkInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
