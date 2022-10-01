// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACEREQUEST_P_H
#define QTAWS_CREATENETWORKINTERFACEREQUEST_P_H

#include "ec2request_p.h"
#include "createnetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfaceRequest;

class CreateNetworkInterfaceRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNetworkInterfaceRequestPrivate(const Ec2Request::Action action,
                                   CreateNetworkInterfaceRequest * const q);
    CreateNetworkInterfaceRequestPrivate(const CreateNetworkInterfaceRequestPrivate &other,
                                   CreateNetworkInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
